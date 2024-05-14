#include "../includes/Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    int i = 0;
    Zombie *zombie = NULL;

    if (!N)
        return zombie;
    zombie = new Zombie[N];
    while(i != N)
    {
        zombie[i].setZombie(name);
        i++;
    }
    return zombie;
}