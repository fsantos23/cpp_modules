#ifndef Form_HPP
#define Form_HPP

#include <string>
#include <iostream>
#include <cstdlib>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	private:
		const std::string name;
		bool sign;
		const int grade_to_exec;
		const int grade_to_sign;

	public:
		Form(void);
		Form(const std::string name, const int grade_to_sign, const int grade_to_exec);
		Form(Form const & src);
		Form& operator=(Form const & rhs);
		~Form(void);

		bool getSign (void) const;
		int getGradeSign (void) const;
		int getGradeExec (void) const;
		const std::string getName (void) const;
		void beSigned(Bureaucrat *b);

		class GradeTooLowException
		{
			public:
				virtual const char *what() const throw();
		};
		class GradeTooHighException
		{
			public:
				virtual const char *what() const throw();
		};
};

std::ostream &operator<<(std::ostream& os, const Form &f);

#endif