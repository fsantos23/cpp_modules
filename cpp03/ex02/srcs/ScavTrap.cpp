#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << GREEN << "Constructor Scavtrap called" << RESET << std::endl;
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
}

ScavTrap::~ScavTrap()
{
    std::cout << GREEN << "Destructor Scavtrap called" << RESET << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (_hitPoints <= 0 || _energyPoints <= 0)
        std::cout << GREEN << "Scavtrap " << _name << " doesn't have the necessary force" << RESET << std::endl;
    else
    {
        std::cout << GREEN << "Scavtrap " << _name << " attacks and does " << _attackDamage << " to " << target << RESET << std::endl;
        _energyPoints--;
    }
}

void ScavTrap::guardGate( void )
{
    std::cout << RED << "ScavTrap is now in Gate keeper mode" << RESET << std::endl;
}