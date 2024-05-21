#include "ScavTrap.hpp"

int main()
{
    ClapTrap p1("Francisco");
    ScavTrap p2("Antonio");

    p1.setDamage(10);
    p1.attack("Antonio");
    p2.takeDamage(p1.getDamage());
    p2.attack("Francisco");
    p1.takeDamage(p2.getDamage());
    p1.attack("Antonio");
    p2.beRepaired(2);
    p1.beRepaired(100);
    p2.guardGate();
}