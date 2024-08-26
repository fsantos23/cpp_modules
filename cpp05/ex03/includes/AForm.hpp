#ifndef Form_HPP
#define Form_HPP

#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
	private:
		const std::string name;
		bool sign;
		const int grade_to_exec;
		const int grade_to_sign;

	public:
		AForm(void);
		AForm(const std::string name, const int grade_to_sign, const int grade_to_exec);
		AForm(AForm const & src);
		AForm& operator=(AForm const & rhs);
		virtual ~AForm(void);

		bool getSign (void) const;
		int getGradeSign (void) const;
		int getGradeExec (void) const;
		const std::string getName (void) const;
		void beSigned(Bureaucrat *b);

		virtual int execute(Bureaucrat const & executor) const = 0;

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

std::ostream &operator<<(std::ostream& os, const AForm &f);

#endif