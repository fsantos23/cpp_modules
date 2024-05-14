#include "../includes/Zombie.hpp"

int main()
{
	Zombie *zombie;
	int N = 5;
	int i = 0;

	zombie = zombieHorde(N, "José");
	while(i != N)
	{
		zombie[i].announce(i);
		i++;
	}
	delete [] zombie;
}