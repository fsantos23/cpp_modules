#include "../includes/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm (const std::string target) : target(target), AForm("Robotomy Form", 72, 45)
{

}

RobotomyRequestForm::~RobotomyRequestForm (void)
{

}


void RobotomyRequestForm::execute(Bureaucrat const & executor)
{
	int fiftypercent;

	std::srand(static_cast<unsigned>(std::time(0)));
	fiftypercent = (std::rand() % 2 == 0);

	if (this->getGradeExec() <= executor.getGrade() && !fiftypercent)
		std::cout << this->target << " has been robotomized" << std::endl;
	else
		std::cout << "Couldn't execute Robotomy Form, because grade is " << executor.getGrade() << std::endl; 
}