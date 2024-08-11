#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	private:
		const std::string target;

	public:
		RobotomyRequestForm (const std::string target);
		~RobotomyRequestForm (void);
		
		int execute(Bureaucrat const & executor) const;
};

#endif