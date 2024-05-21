#include "../includes/FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << BLUE << "Constructor FragTrap called" << RESET << std::endl;
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
}

FragTrap::~FragTrap()
{
    std::cout << BLUE << "Destructor FragTrap called" << RESET << std::endl;
}

void FragTrap::attack(const std::string& target)
{
    if (_hitPoints <= 0 || _energyPoints <= 0)
        std::cout << BLUE << "FragTrap " << _name << " doesn't the necessary force" << RESET << std::endl;
    else
    {
        std::cout << BLUE << "FragTrap " << _name << " attacks and does " << _attackDamage << " to " << target << RESET << std::endl;
        _energyPoints--;
    }
}

void FragTrap::highFivesGuys( void )
{
    std::cout << YELLOW << "FragTrap is asking for a high five" << RESET << std::endl;
}