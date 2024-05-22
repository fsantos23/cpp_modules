#include "Cat.hpp"

Cat::Cat( void )
{
	std::cout << GREEN << "A cat has born" << RESET << std::endl;
	type = "Cat";
}

Cat::~Cat( void )
{
	std::cout << GREEN << "A cat has died" << RESET << std::endl;
}

void Cat::makeSound( void ) const
{
	std::cout << GREEN << "MIAUUUUUUUUUUUUUUU" << RESET << std::endl;
}