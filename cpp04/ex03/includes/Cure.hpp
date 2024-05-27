#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include "Character.hpp"

class ICharacter;

class Cure : public AMateria {
	public:
		Cure( void );
		Cure(Cure const & src);
		Cure& operator=(Cure const & rhs);
		~Cure( void );

		void use(ICharacter& target);
		AMateria* clone() const;
};

#endif