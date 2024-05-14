#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{

	Weapon club1 = Weapon("knife");
	HumanA bob("Bob", club1);
	bob.attack();
	club1.setType("fork");
	bob.attack();

	Weapon club2 = Weapon("pistol");
	HumanB jim("Jim");
	jim.attack();
	jim.setWeapon(club2);
	jim.attack();
	club2.setType("pen");
	jim.attack();

	return 0;
}