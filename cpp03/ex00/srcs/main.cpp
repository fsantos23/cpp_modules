#include "ClapTrap.hpp"

int main()
{
    ClapTrap p1("Francisco");
    ClapTrap p2("Antonio");

    p1.setDamage(3);
    p1.attack("Antonio");
    p2.takeDamage(p1.getDamage());
    p2.setDamage(9);
    p2.attack("Francisco");
    p1.takeDamage(p2.getDamage());
    p1.beRepaired(5);
    p1.setDamage(10);
    p1.attack("Antonio");
    p2.takeDamage(p1.getDamage());
    p2.attack("Francisco");
    p2.beRepaired(2);
}
