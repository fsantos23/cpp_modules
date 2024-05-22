#include "Animal.hpp"

Animal::Animal( void )
{
    std::cout << "An Animal as been created" << std::endl;
}

Animal::~Animal( void )
{
    std::cout << "An Animal as been destroyed" << std::endl;
}

std::string Animal::getType( void ) const
{
	return type;
}

void Animal::makeSound( void ) const
{
	std::cout << "Doesn't do any type of noise" << std::endl;
}