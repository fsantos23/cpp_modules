#include "../includes/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm (const std::string target) : AForm("Robotomy Form", 72, 45), target(target)
{

}

RobotomyRequestForm::~RobotomyRequestForm (void)
{

}


int RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	std::srand(std::time(0));

	std::cout << "DRRRRRRRRRRRRR........." << std::endl;
	if(this->getGradeExec() < executor.getGrade())
		return 0;
	if((rand() % 2 == 0))
		return 2;
	std::cout << this->target << " has been robotomized " << std::endl;
	return 1;
}