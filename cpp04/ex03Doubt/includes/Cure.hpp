#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria {
	public:
		Cure( void );
		Cure(Cure const & src);
		Cure& operator=(Cure const & rhs);
		~Cure( void );

		void use(ICharacter& target);
		void use(int idx, ICharacter& target);
};

#endif