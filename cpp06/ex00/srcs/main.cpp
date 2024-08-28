#include "../includes/ScalarMethod.hpp"

int main (int ac, char **av)
{
	if(ac != 2)
		return 1;
	ScalarMethod a(av[1]);
	return 0;
}