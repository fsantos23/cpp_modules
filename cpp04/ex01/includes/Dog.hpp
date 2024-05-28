#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
	private:
		Brain* brain;

	public:
		Dog( void );
		Dog(Dog const &src);
		Dog& operator=(Dog const & rhs);
		~Dog( void );

		void setIdea(std::string idea);
		std::string getIdea( void ) const;
		void makeSound( void ) const;
};

#endif