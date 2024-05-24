#include "WrongCat.hpp"
#include "Animal.hpp"

WrongCat::WrongCat( void )
{
	std::cout << GREEN << "A WrongCat has born" << RESET << std::endl;
	type = "WrongCat";
}

WrongCat::~WrongCat( void )
{
	std::cout << GREEN << "A WrongCat has died" << RESET << std::endl;
}

void WrongCat::makeSound( void ) const
{
	std::cout << GREEN << "Wrong cat sound" << RESET << std::endl;
}