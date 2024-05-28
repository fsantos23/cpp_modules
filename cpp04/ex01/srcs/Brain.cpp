#include "../includes/Brain.hpp"

Brain::Brain( void )
{
	std::cout << "A brain as been created" << std::endl;
}

Brain::~Brain( void )
{
	std::cout << "A brain has been destroyed" << std::endl;
}

Brain::Brain(Brain const &src)
{
	this->ideas[100] = src.ideas[100];
}

Brain& Brain::operator=(Brain const & rhs)
{
	this->ideas[100] = rhs.ideas[100];

	return *this;
}

void Brain::setIdeas(std::string idea)
{
	for(int j = 0; j < (int)idea.length(); j++)
		this->ideas[j] = idea[j];
}

std::string Brain::getIdeas( void ) const
{
	std::string *idea = NULL;

	for(int i = 0; i < (int)ideas->length(); i++)
		idea[i] = ideas[i];

	return *idea;
}