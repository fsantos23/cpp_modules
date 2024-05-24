#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>
#include <iostream>

class WrongAnimal {
    protected:
        std::string type;
    
    public:
        WrongAnimal( void );
        WrongAnimal(WrongAnimal const &src);
		WrongAnimal& operator=(WrongAnimal const & rhs);
		virtual ~WrongAnimal( void );

		std::string getType( void ) const;
		void makeSound( void ) const;
};

#endif 