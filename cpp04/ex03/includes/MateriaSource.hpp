#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource {
	private:
		static const int maxMateria = 4;
		AMateria *materiaSlots[maxMateria];
		int count;

	public:
		MateriaSource ( void );
		MateriaSource (MateriaSource const &src);
		MateriaSource& operator=(MateriaSource const & rhs);
		~MateriaSource( void );

		void learnMateria(AMateria* m);
		AMateria* createMateria(std::string const & type);
};

#endif