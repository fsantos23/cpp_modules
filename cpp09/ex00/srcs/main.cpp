//std::map
#include "../includes/BitcoinExchange.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "Usage: ./replace filename" << std::endl;
		return 1;
	}
	std::string filename = av[1];
	std::ifstream
}
