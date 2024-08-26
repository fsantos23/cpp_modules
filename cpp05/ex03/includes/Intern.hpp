#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include <map>

class Intern {
	private:

	public:
		Intern(void);
		Intern(Intern const & src);
		Intern& operator=(Intern const & rhs);
		~Intern(void);

		AForm *makeForm(std::string form, std::string target);
};

#endif