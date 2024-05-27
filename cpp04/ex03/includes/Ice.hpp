#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include "Character.hpp"

class ICharacter;

class Ice : public AMateria {
	public:
		Ice( void );
		Ice(Ice const & src);
		Ice& operator=(Ice const & rhs);
		~Ice( void );
	
		void use(ICharacter& target);
		AMateria* clone() const;
};

#endif