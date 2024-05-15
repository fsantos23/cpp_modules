#include "ClapTrap.hpp"

int main()
{
    ClapTrap p1("Francisco");
    ClapTrap p2("Antonio");

    p1.setDamage(3);
    p1.attack("Antonio");
    p2.takeDamage(p1.getDamage());
    p1
}