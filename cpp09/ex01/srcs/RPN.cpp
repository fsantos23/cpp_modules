#include "../includes/RPN.hpp"

RPN::RPN()
{
}

RPN::~RPN()
{
}

int RPN::isNumber(std::string str)
{
	if (str.empty())
		return false;

	size_t start = (str[0] == '-' && str[1]) ? 1 : 0;

	for (size_t i = start; i < str.length(); ++i)
	{
		if (!isdigit(str[i]))
			return 0;
	}
	return 1;
}

void RPN::operate(std::string str)
{
	if (_stack.size() < 2)
		throw std::runtime_error("Not enough operands");

	int a = _stack.top();
	_stack.pop();
	int b = _stack.top();
	_stack.pop();

	if (str == "+")
		_stack.push(b + a);
	else if (str == "-")
		_stack.push(b - a);
	else if (str == "*")
		_stack.push(b * a);
	else if (str == "/")
		_stack.push(b / a);
	else
		throw std::runtime_error("Invalid operator " + str);
}

void RPN::calculate(std::string str)
{
	std::istringstream iss(str);
	std::string token;
	
	while (iss >> token)
	{
		if(isNumber(token))
		{
			std::istringstream convert(token);
            int num;
            convert >> num;
			if(num >= 10)
				throw std::runtime_error("Invalid number " + token);
			_stack.push(num);
		}
		else
			operate(token);
	}
	if(isNumber(token))
		throw std::runtime_error("Not enough operators");
	std::cout << "Result: " << _stack.top() << std::endl;
}
