//std::map
#include "../includes/BitcoinExchange.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "Usage: ./replace filename" << std::endl;
		return 1;
	}
	BitcoinExchange exchange("../data.csv", av[1]);
}
