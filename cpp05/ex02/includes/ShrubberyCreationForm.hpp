#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
	private:
		const std::string target;

	public:
		ShrubberyCreationForm (const std::string target);
		~ShrubberyCreationForm (void);
		
		int execute(Bureaucrat const & executor) const;
};

#endif