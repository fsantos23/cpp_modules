#include "../includes/AMateria.hpp"
#include "../includes/Character.hpp"
#include "../includes/MateriaSource.hpp"
#include "../includes/Cure.hpp"
#include "../includes/Ice.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;

	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	IMateriaSource* other = new MateriaSource();

	other->learnMateria(new Cure());

	tmp = other->createMateria("ice");

	ICharacter* francisco = new Character("francisco");

	ICharacter* bob = new Character("bob");

	francisco->equip(tmp);
	francisco->use(0, *bob);


	me->use(0, *bob);
	me->use(1, *bob);
	me->unequip(0);
	//doesnt have the materia of ice on him anymore
	me->use(0, *bob);
	
	delete francisco;
	delete other;
	delete bob;
	delete me;
	delete src;
	return 0;
}
