#include "../includes/Zombie.hpp"

void Zombie::Zombie(void)
{

}

void Zombie::~Zombie(void)
{
    std::cout << "Zombie destroyed" << std::endl;
}

void Zombie::announce (void)
{
    std::cout << Zombie::getZombie() << "BraiiiiiiinnnzzzZ..." << std::endl;
}