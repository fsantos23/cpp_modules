//std::map
#include "../includes/BitcoinExchange.hpp"

//falta só ver o que se passa com as datas em fevereiro (29, 30, 31)

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "Usage: ./btc filename" << std::endl;
		return 1;
	}
	BitcoinExchange exchange("data.csv", av[1]);
	exchange.sendValues();
}
