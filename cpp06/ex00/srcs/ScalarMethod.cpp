#include "../includes/ScalarMethod.hpp"

ScalarMethod::ScalarMethod(std::string literal)
{
	convert(literal);
}

void ScalarMethod::convert(const std::string literal)
{
	toChar(literal);
	toInt(literal);
	toFloat(literal);
	toDouble(literal);
}

ScalarMethod::~ScalarMethod(void)
{
	
}

void toChar(const std::string literal)
{
	//it makes the conversion when compiling not when running static_cast<int>
	if(literal.length() == 1)
	{
		char ch = static_cast<char>(literal[0]);
		if (std::isprint(ch) && !std::isdigit(literal[0]))
			std::cout << "char: '" << ch << "'" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
		return ;
	}
	int num = std::atoi(literal.c_str());
	if(num >= 0 && num <= 127)
	{
		char c = static_cast<char>(num);
		if (std::isprint(c))
			std::cout << "char: '" << c << "'" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
	}
	else
		std::cout << "char: Impossible" << std::endl;
}

bool isInteger(const std::string& str)
{
	long num = std::strtol(str.c_str(), NULL, 10);
	if (str.empty() && (num > INT_MIN || num < INT_MAX))
		return false;
    std::size_t start = 0;
    if (str[0] == '-' || str[0] == '+')
	{
        if (str.length() == 1)
			return false;
        start = 1;
    }
    for (std::size_t i = start; i < str.length(); ++i)
	{
		if(str[i] == '.')
			return true;
        if (!std::isdigit(str[i]) && str[i] != 'f')
			return false;
    }
    return true;
}

void toInt(const std::string literal)
{
	std::cout << "int: ";
	if (literal.length() == 1 && !isdigit(literal[0])) {
        // Convert single character to ASCII value
        std::cout << static_cast<int>(literal[0]) << std::endl;
        return;
    }

    char* end;
    double num = std::strtod(literal.c_str(), &end);
	//ver conversao de 1. ou 1.2 para 1 e verificar se passa para 2 se 1.5 <
	//e fazer conversasao de 'a' para int 96
    if (*end != '\0'  && *end != 'f' && (*end != '.'))
	{
        std::cout << "Not possible" << std::endl;
        return;
    }
    if (num < INT_MIN || num > INT_MAX)
	{
        std::cout << "Not possible" << std::endl;
        return;
    }
	
	double decimal_part = num - static_cast<int>(num);
	if (decimal_part >= 0.5)
		num += (num > 0) ? 0.5 : -0.5;

	std::cout << static_cast<int>(num) << std::endl;
}

void toDouble(const std::string literal)
{
	std::cout << "double: ";
    char *end;
    double num = std::strtod(literal.c_str(), &end);

    if (*end != '\0') 
	{
        if (*end == 'f' && *(end + 1) == '\0')
            std::cout << std::fixed << std::setprecision(1) << num << std::endl;
        else
            std::cout << "Not possible" << std::endl;
    } 
	else
        std::cout << std::fixed << std::setprecision(1) << num << std::endl;
}

void toFloat(const std::string literal)
{
	std::cout << "float: ";
    char *end;
    double num = std::strtod(literal.c_str(), &end);

    if (*end != '\0')
	{
        if (*end == 'f' && *(end + 1) == '\0')
            std::cout << std::fixed << std::setprecision(1) << num << 'f' << std::endl;
        else
            std::cout << "Not possible" << std::endl;
    } 
	else
        std::cout << std::fixed << std::setprecision(1) << num << 'f' << std::endl;
}