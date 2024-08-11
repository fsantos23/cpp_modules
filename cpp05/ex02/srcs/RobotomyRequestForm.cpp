#include "../includes/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm (const std::string target) : AForm("Robotomy Form", 72, 45), target(target)
{

}

RobotomyRequestForm::~RobotomyRequestForm (void)
{

}


int RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	int fiftypercent;

	std::srand(static_cast<unsigned>(std::time(0)));
	fiftypercent = (std::rand() % 2 == 0);

	if(this->getGradeExec() < executor.getGrade() && fiftypercent)
		throw GradeTooLowException();
	std::cout << this->target << " has been robotomized " << std::endl;
	return 1;
}