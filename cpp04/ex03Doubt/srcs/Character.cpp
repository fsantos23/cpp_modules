#include "../includes/Character.hpp"
#include "../includes/AMateria.hpp"

Character::Character( void )
{

}

Character::~Character( void )
{

}

std::string const &Character::getName( void )
{
	return AMateria.getType();
}

void Character::equip(AMateria *m)
{

}

void Character::unequip(int idx)
{

}

void Character::use(int idx, ICharacter& target)
{
	AMateria.use(target);
}