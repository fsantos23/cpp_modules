#include "../includes/Zombie.hpp"

int main()
{
    Zombie *zombie;
    zombie = newZombie("Francisco");
    randomChump("Antonio");
    zombie->announce();
    delete zombie;
    return 0;
}