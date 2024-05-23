#include "../includes/Dog.hpp"

Dog::Dog( void ) : brain(new Brain())
{
	std::cout << BLUE << "A dog has born" << RESET << std::endl;
	type = "Dog"; 
	brain->setIdeas("woof woooooof woofffffff wooof wof wof wooooooooffffffff");
}

Dog::~Dog( void )
{
	std::cout << BLUE << "A dog has died" << RESET << std::endl;
	delete brain;
}

void Dog::makeSound( void ) const
{
	std::cout << BLUE << "WOOOOOOOOOFFFFFFFFFF" << RESET << std::endl;
}