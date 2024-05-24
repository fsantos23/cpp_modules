#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
	public:
		MateriaSource ( void );
		MateriaSource (MateriaSource const &src);
		MateriaSource& operator=(MateriaSource const & rhs);
		~MateriaSource( void );

		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
};

#endif