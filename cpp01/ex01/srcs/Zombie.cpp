#include "../includes/Zombie.hpp"

Zombie::Zombie(void)
{
    std::cout << "Zombie created" << std::endl;
}

Zombie::~Zombie(void)
{
    std::cout << "Zombie destroyed" << std::endl;
}

std::string Zombie::getZombie (void) const
{
    return this->name;
}

void Zombie::announce (int i)
{
    std::cout << i << ": " << Zombie::getZombie() << std::endl;
}

void Zombie::setZombie(std::string name)
{
    this->name = name;
}