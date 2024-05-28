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
    for (int i = 0; i < 100; ++i)
        this->ideas[i] = src.ideas[i];
}

Brain& Brain::operator=(Brain const & rhs)
{
    if (this != &rhs)
	{
        for (int i = 0; i < 100; ++i)
            this->ideas[i] = rhs.ideas[i];
    }
    return *this;
}

void Brain::setIdeas(std::string idea)
{
    for (int i = 0;i < (int)idea.length(); ++i)
        this->ideas[i] = idea;
}

std::string Brain::getIdeas(void) const
{
    std::string idea;

	if (!this->ideas->empty())
	{
		idea += this->ideas[0];
	}
    return idea;
}