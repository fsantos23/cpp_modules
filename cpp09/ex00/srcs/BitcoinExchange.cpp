#include "../includes/BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(std::string filename, std::string input_file)
{
	addValues(filename, "db");
	addValues(input_file, "input");
}

void BitcoinExchange::addValues(std::string filename, std::string name)
{
	std::ifstream file(filename.c_str());
	std::string line;
	std::string date;
	float value;

	if (!file.is_open())
	{
		std::cerr << "Error: could not open file" << std::endl;
		exit(1);
	}
	while (std::getline(file, line))
	{
		std::stringstream ss(line);
		std::getline(ss, date, ',');
		ss >> value;
		if(name == "db")
			_db[date] = value;
		else if(name == "input")
			_input[date] = value;
	}
}

void BitcoinExchange::sendValues()
{
	std::map<std::string, float>::iterator it;

	for (it = _input.begin(); it != _input.end(); it++)
	{
		if(checkDate(it->first))
			std::cout << "Wrong date input: " << it->first << std::endl;
		else
			printValue(it->first, it->second);
	}
}

int BitcoinExchange::checkDate(std::string date)
{
	std::string year = date.substr(0, 4);
	_date["year"] = year;
	std::string month = date.substr(5, 2);
	_date["month"] = month;
	std::string day = date.substr(8, 2);
	_date["day"] = day;
	if(checkNumber())
		return 1;
	_date.clear();
	return 0;
}

int BitcoinExchange::checkNumber()
{
	std::map<std::string, std::string>::iterator it;
	for(it = _date.begin(); it != _date.end(); it++)
	{
		std::string date = it->second;
		for (int i = 0; i < date.length(); i++)
		{
			if (!isdigit(date[i]))
				return 1;
		}
		if(it->first == "month" && (date <= "00" || date >= "13")) 
			return 1;
		if(it->first == "day" && ((date <= "00" || date >= "32") || (_date["month"] == "02" && (date <= "00" || date >= "29"))))
			return 1;
		if(it->first == "day" && ((_date["month"] == "02" || _date["month"] == "04" || _date["month"] == "06" || _date["month"] == "09" || _date["month"] == "11") && (date <= "00" || date >= "31")))
			return 1;
		if(it->first == "year" && date <= "0000")
			return 1;
		_date.find("month")
	}
	return 0;
}


BitcoinExchange::~BitcoinExchange()
{
}