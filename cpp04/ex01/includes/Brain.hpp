#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>

class Brain {
	private:
		std::string ideas[100];
	
	public:
		Brain( void );
		Brain(Brain const &src);
		Brain& operator=(Brain const & rhs);
		~Brain( void );
		void setIdeas(std::string idea);
		std::string getIdeas( void ) const;
};

#endif