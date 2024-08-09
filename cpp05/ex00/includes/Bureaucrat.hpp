#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <cstdlib>

class Bureaucrat {
	private:
		const std::string name;
		int grade;

	public:
		Bureaucrat(void);
		Bureaucrat(const std::string name, int grade);
		Bureaucrat(Bureaucrat const & src);
		Bureaucrat& operator=(Bureaucrat const & rhs);
		~Bureaucrat(void);

		class GradeToLowException
		{
			public:
				virtual const char * what() const throw();
		};
		class GradeTooHighException 
		{
			public:
				virtual const char * what() const throw();
		};

		const std::string getName(void) const;
		int getGrade(void) const;
		void upGrade (void);
		void downGrade (void);
};

std::ostream &operator<<(std::ostream& os, const Bureaucrat &b);

#endif