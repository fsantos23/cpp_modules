#include "../includes/BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(const std::string& filename, const std::string& input_file)
{
	addValues(filename, "db");
	addValues(input_file, "input");
}

void BitcoinExchange::addValues(const std::string& filename, const std::string& name)
{
	std::ifstream file(filename.c_str());
	std::string line;
	std::string dateStr;
	float value;

	if (!file.is_open())
	{
		std::cout << filename << std::endl;
		std::cerr << "Error: could not open file" << std::endl;
		exit(1);
	}
	// Skip header
	std::getline(file, line);

	while (std::getline(file, line))
	{
		std::stringstream ss(line);
		std::getline(ss, dateStr, ',');
		ss >> value;

		// Validate date
		struct tm tm = {};
		char* ret = strptime(dateStr.c_str(), "%Y-%m-%d", &tm);
		if (ret == NULL || mktime(&tm) == -1)
		{
			std::cerr << "Invalid date format: " << dateStr << std::endl;
			continue;
		}

		if (name == "input" && (value < 0 || value > 1000))
        {
            std::cerr << "Error: Input invalid: " << value << std::endl;
            continue;
        }

		// Normalize time to midnight
		tm.tm_hour = 0;
		tm.tm_min = 0;
		tm.tm_sec = 0;
		
		// Convert to time_t for consistent comparison
		std::time_t time = mktime(&tm);
		if (name == "db")
			_db[time] = value;
		else if (name == "input")
			_input[time] = value;
	}
}

void BitcoinExchange::sendValues()
{
	std::map<std::time_t, float>::const_iterator inputIt;
	for (inputIt = _input.begin(); inputIt != _input.end(); inputIt++)
	{
		std::map<std::time_t, float>::const_iterator dbIt = _db.lower_bound(inputIt->first);

		if (dbIt == _db.end())
		{
			if (!_db.empty())
				dbIt = --_db.end();
			else
			{
				std::cout << "Error: No data available" << std::endl;
				continue;
			}
		}
		float dbValue = dbIt->second;
		std::cout << formatTime(inputIt->first) << " => "
					<< inputIt->second << " = " << (inputIt->second * dbValue) << std::endl;
	}
}

std::string BitcoinExchange::formatTime(std::time_t time)
{
	struct tm* tm = localtime(&time);
	char buffer[11];
	strftime(buffer, sizeof(buffer), "%Y-%m-%d", tm);
	return std::string(buffer);
}

BitcoinExchange::~BitcoinExchange() 
{
}