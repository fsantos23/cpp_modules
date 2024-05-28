#include "../includes/Cat.hpp"

Cat::Cat( void ) : brain(new Brain())
{
	std::cout << GREEN << "A cat has born" << RESET << std::endl;
	type = "Cat";
	brain->setIdeas("miauuuuuuuu miauuu miau miau miaaaaaaaaaaaaaau miiiiau miau");
}

Cat::~Cat( void )
{
	std::cout << GREEN << "A cat has died" << RESET << std::endl;
	delete brain;
}

Cat::Cat(Cat const &src) : Animal(src), brain(new Brain(*src.brain))
{

}

Cat& Cat::operator=(Cat const & rhs)
{
    if (this->brain != rhs.brain)
	{
        delete this->brain;
        this->brain = new Brain(*rhs.brain);
    }
    return *this;
}

void Cat::setIdea(std::string idea)
{
	brain->setIdeas(idea);
}

std::string Cat::getIdea( void ) const
{
	return brain->getIdeas();
}

void Cat::makeSound( void ) const
{
	std::cout << GREEN << "MIAUUUUUUUUUUUUUUU" << RESET << std::endl;
}