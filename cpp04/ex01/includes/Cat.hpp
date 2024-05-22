#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "../includes/Brain.hpp"

class Brain;

class Cat : public Animal {
	private:
		::Brain* brain;

	public:
		Cat( void );
		Cat(Cat const &src);
		Cat& operator=(Cat const & rhs);
		~Cat( void );

		void makeSound( void ) const;
};

#endif