#include "../includes/Brain.hpp"

Brain::Brain( void )
{
	std::cout << "A brain as been created" << std::endl;
}

Brain::~Brain( void )
{
	std::cout << "A brain has been destroyed" << std::endl;
}

void Brain::setIdeas(std::string idea)
{
	*ideas = idea;
}

std::string Brain::getIdeas( void ) const
{
	return *ideas;
}