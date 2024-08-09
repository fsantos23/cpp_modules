#ifndef Form_HPP
#define Form_HPP

#include <string>
#include <iostream>
#include <cstdlib>

class Form {
	private:
		const std::string name;
		bool sign;
		const int grade_to_sign;
		const int grade_to_exec;

	public:
		Form(void);
		Form(const std::string name, int grade);
		Form(Form const & src);
		Form& operator=(Form const & rhs);
		~Form(void);

		Form 
};

std::ostream &operator<<(std::ostream& os, const Form &b);

#endif