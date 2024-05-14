#include "Weapon.hpp"

Weapon::Weapon (std::string type)
{
    setType(type);
    std::cout << "Weapon created: " << Weapon::getType() << std::endl;
}

Weapon::~Weapon (void)
{
    std::cout << "Weapon destroyed: " << Weapon::getType() << std::endl;
}

void Weapon::setType(std::string type)
{
    this->type = type;
}

std::string Weapon::getType (void) const
{
    return this->type;
}

Weapon::Weapon(const Weapon& src) : type(src.type)
{

}