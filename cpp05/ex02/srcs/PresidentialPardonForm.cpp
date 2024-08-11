#include "../includes/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm (const std::string target) : AForm("Presidential Pardon", 25, 5), target(target)
{

}

PresidentialPardonForm::~PresidentialPardonForm (void)
{

}


int PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if(this->getGradeExec() < executor.getGrade())
		throw GradeTooLowException();
	std::cout << this->target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
	return 1;
}