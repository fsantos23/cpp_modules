#include "ScavTrap.hpp"
#include "../includes/FragTrap.hpp"

int main()
{
    ClapTrap p1("Francisco");
    ScavTrap p2("Antonio");
    FragTrap p3("Joao");

    p1.attack("Joao");
    p3.takeDamage(p1.getDamage());
    p2.attack("Joao");
    p3.takeDamage(p2.getDamage());
    p3.beRepaired(10);
    p2.guardGate();
    p3.attack("Francisco");
    p1.takeDamage(p3.getDamage());
    p1.beRepaired(10);
    p3.attack("Antonio");
    p2.takeDamage(p3.getDamage());
    p3.attack("Antonio");
    p2.takeDamage(p3.getDamage());
    p2.beRepaired(100);
    p3.highFivesGuys();
}