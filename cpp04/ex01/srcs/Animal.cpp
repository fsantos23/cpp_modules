#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "An Animal as been created" << std::endl;
}

Animal::~Animal()
{
    std::cout << "An Animal as been destroyed" << std::endl;
}

Animal::Animal(Animal const &src) : type(src.type)
{

}

Animal& Animal::operator=(Animal const & rhs)
{
	this->type = rhs.type;

	return *this;
}

std::string Animal::getType( void ) const
{
	return type;
}

void Animal::makeSound( void ) const
{
	std::cout << "Doesn't do any type of noise" << std::endl;
}