#include "HumanB.hpp"

HumanB::HumanB (std::string name) : name(name), weapon(NULL)
{
    std::cout << getName() << " created" << std::endl;
}

HumanB::~HumanB (void)
{
    std::cout << getName() << " destroyed" << std::endl;
}

void HumanB::setName(std::string name)
{
    this->name = name;
}

std::string HumanB::getName (void) const
{
    return this->name;
}

void HumanB::setWeapon(Weapon weapon)
{
    this->weapon = &weapon;
}

void HumanB::attack(void)
{
    if(weapon == NULL)
        std::cout << getName() << " punches with bare fists" << std::endl;
    else
        std::cout << getName() << " attacks with their weapon " << weapon->getType() << std::endl;
}