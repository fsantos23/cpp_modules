#include "../includes/MateriaSource.hpp"
#include "../includes/AMateria.hpp"

MateriaSource::MateriaSource( void )
{

}

MateriaSource::~MateriaSource( void )
{

}

void MateriaSource::learnMateria(AMateria *)
{
	AMateria *learn = new AMateria();

	*learn = AMateria*;
}

AMateria *MateriaSource::createMateria(std::string const & type)
{
	if (type.c_str() != "ice" && type.c_str() == "cure")
		return 0;
	AMateria *materia = new AMateria(type);
	return materia;
}