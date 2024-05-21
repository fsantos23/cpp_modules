#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "Constructor Scavtrap called" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Destructor Scavtrap called" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    
}