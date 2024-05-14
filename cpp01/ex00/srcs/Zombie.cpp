#include "../includes/Zombie.hpp"

Zombie::Zombie(void)
{
    std::cout << "Zombie created" << std::endl;
}

Zombie::~Zombie(void)
{
    std::cout << "Zombie destroyed: " << Zombie::getZombie() << std::endl;
}

std::string Zombie::getZombie (void) const
{
    return this->name;
}

void Zombie::announce (void)
{
    std::cout << Zombie::getZombie() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setZombie(std::string name)
{
    this->name = name;
}