#include "WrongAnimal.hpp"
#include "../includes/Animal.hpp"

WrongAnimal::WrongAnimal( void )
{
	std::cout << RED << "An wrong animal as been created" << RESET << std::endl;
}

WrongAnimal::~WrongAnimal( void )
{
    std::cout << "An wrong animal as been destroyed" << std::endl;
}

std::string WrongAnimal::getType( void ) const
{
	return type;
}

void WrongAnimal::makeSound( void ) const
{
	std::cout << "Wrong animal noise" << std::endl;
}