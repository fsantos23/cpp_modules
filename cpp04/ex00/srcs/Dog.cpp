#include "Dog.hpp"

Dog::Dog( void )
{
	std::cout << BLUE << "A dog has born" << RESET << std::endl;
	type = "Dog"; 
}

Dog::~Dog( void )
{
	std::cout << BLUE << "A dog has died" << RESET << std::endl;
}

void Dog::makeSound( void ) const
{
	std::cout << BLUE << "WOOOOOOOOOFFFFFFFFFF" << RESET << std::endl;
}