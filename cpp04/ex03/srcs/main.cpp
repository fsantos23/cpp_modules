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
	
	Character *antonio = new Character("antonio");
	Character *cpy = new Character("cpy");

	tmp = other->createMateria("cure");
	antonio->equip(tmp);

	*cpy = *antonio;

	std::cout << RED << "Should print the materia that me has in the slot 1" << RESET << std::endl;

	cpy->use(0, *antonio);

	delete francisco;
	delete other;
	delete bob;
	delete me;
	delete src;
	return 0;
}
