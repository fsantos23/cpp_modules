#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string _name) : _name(_name), _hitPoints(10), _energyPoints(10), _attackDamage(0) 
{
    std::cout << "Constructor Claptrap called" << std::endl;
}

ClapTrap::~ClapTrap( void )
{
    std::cout << "Destructor Claptrap called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (_hitPoints <= 0 || _energyPoints <= 0)
        std::cout << "Claptrap " << _name << " doesn't have the necessary force" << std::endl;
    else
    {
        std::cout << "Claptrap " << _name << " attacks and does " << _attackDamage << " to " << target << std::endl;
        _energyPoints--;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << _name << " loses " << amount << " of hit points" << std::endl;
    _hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_energyPoints > 0 && _hitPoints > 0)
    {
        std::cout << _name << " healed himself with " << amount << std::endl;
        _energyPoints--;
        _hitPoints += amount;
    }    
    else 
        std::cout << _name << " can't repair itself" << std::endl;
}

int ClapTrap::getDamage( void ) const
{
    return _attackDamage;
}

void ClapTrap::setDamage( int amount )
{
    this->_attackDamage = amount;
}