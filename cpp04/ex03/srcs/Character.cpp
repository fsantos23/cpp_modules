#include "../includes/Character.hpp"
#include "../includes/AMateria.hpp"

Character::Character(std::string name) : name(name)
{
	for(int i = 0; i < 4; i++)
		inventory[i] = NULL;
}

Character::~Character( void )
{
	for(int i = 0; i < 4; i++)
		delete inventory[i];
}

std::string const &Character::getName() const
{
	return name;
}

Character::Character(Character const & src) : name(src.name)
{
	for(int i = 0; i < 4; i++)
	{
		if(src.inventory[i])
			inventory[i] = src.inventory[i]->clone();
		else
			inventory[i] = NULL;
	}
}

Character& Character::operator=(Character const & rhs)
{
	for(int i = 0; i < 4; i++)
	{
		if(inventory[i])
			delete inventory[i];
	}

	name = rhs.name;

	for(int i = 0; i < 4; i++)
	{
		if(rhs.inventory[i])
			inventory[i] = rhs.inventory[i]->clone();
		else
			inventory[i] = NULL;
	}
	return *this;
}

void Character::equip(AMateria* m)
{
	for(int i = 0; i < 4; i++)
	{
		if(inventory[i] == NULL)
		{
			inventory[i] = m;
			break ;
		}
	}
}

void Character::unequip(int idx)
{
	if(idx >= 0 && idx <= 3)
		inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if(idx >= 0 && idx <= 3 && inventory[idx] != NULL)
		inventory[idx]->use(target);
}