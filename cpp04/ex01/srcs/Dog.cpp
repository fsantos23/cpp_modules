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

Dog::Dog(Dog const &src) : brain(src.brain)
{

}

Dog& Dog::operator=(Dog const & rhs)
{
	delete this->brain;
	this->brain = new Brain(*rhs.brain);

	return *this;
}

void Dog::setIdea(std::string idea)
{
	brain->setIdeas(idea);
}

std::string Dog::getIdea( void ) const
{
	return this->brain->getIdeas();
}

void Dog::makeSound( void ) const
{
	std::cout << BLUE << "WOOOOOOOOOFFFFFFFFFF" << RESET << std::endl;
}