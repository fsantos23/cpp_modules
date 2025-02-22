#include "../includes/RPN.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "Usage: ./RPN \"[RPN expression]\"" << std::endl;
		return 1;
	}
	RPN rpn;
	try
	{
		rpn.calculate(av[1]);
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		return 0;
	}
	return 0;
}