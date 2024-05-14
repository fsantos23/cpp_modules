#include "HumanA.hpp"

HumanA::HumanA (std::string name, const Weapon& weapon) : weapon(weapon)
{
    setName(name);
    std::cout << getName() << " created" << std::endl;
}

HumanA::~HumanA (void)
{
    std::cout << getName() << " destroyed" << std::endl;
}

void HumanA::setName(std::string name)
{
    this->name = name;
}

std::string HumanA::getName (void) const
{
    return this->name;
}

void HumanA::attack(void)
{
    std::cout << getName() << " attacks with their weapon " << weapon.getType() << std::endl;
}