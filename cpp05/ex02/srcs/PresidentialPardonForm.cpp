#include "../includes/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm (const std::string target) : target(target), AForm("Presidential Pardon", 25, 5)
{

}

PresidentialPardonForm::~PresidentialPardonForm (void)
{

}


void PresidentialPardonForm::execute(Bureaucrat const & executor)
{
	if (this->getGradeExec() <= executor.getGrade())
		std::cout << this->target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
	else
		std::cout << "Couldn't execute Presidential Pardon Form, because grade is " << executor.getGrade() << std::endl; 
}