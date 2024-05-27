#include "../includes/MateriaSource.hpp"
#include "../includes/AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

MateriaSource::MateriaSource( void ) : count(0)
{
	for(int i = 0; i < maxMateria; i++)
		materiaSlots[i] = NULL;
}

MateriaSource::~MateriaSource( void )
{
	for(int i = 0; i < maxMateria; i++)
		delete materiaSlots[i];
}

void MateriaSource::learnMateria(AMateria *m)
{
	if(count < maxMateria && m != NULL)
		materiaSlots[count++] = m;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for(int i = 0; i < maxMateria; i++)
	{
		if(materiaSlots[i] && materiaSlots[i]->getType() == type)
				return materiaSlots[i]->clone();
	}
	return NULL;
}