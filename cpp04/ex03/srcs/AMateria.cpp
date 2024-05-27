#include "AMateria.hpp"

AMateria::AMateria()
{

}

AMateria::AMateria(std::string const & type) : type(type)
{

}

AMateria::~AMateria()
{

}

AMateria& AMateria::operator=(AMateria const & rhs)
{
	if(type != rhs.type)
		type = rhs.type;
	return *this;
}

std::string const &AMateria::getType() const
{
	return type;
}