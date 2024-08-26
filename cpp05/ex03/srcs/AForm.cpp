#include "../includes/AForm.hpp"

AForm::AForm (const std::string name, const int grade_to_sign, const int grade_to_exec) : name(name), sign(false), grade_to_exec(grade_to_exec), grade_to_sign(grade_to_sign)
{
	if (grade_to_exec < 1 || grade_to_sign < 1)
		throw GradeTooHighException();
	if (grade_to_exec > 150 || grade_to_sign > 150)
		throw GradeTooLowException();
}

AForm::~AForm (void)
{

}

const char *AForm::GradeTooHighException::what() const throw()
{
	return "Grade too high";
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return "Grade too low";
}

bool AForm::getSign (void) const
{
	return sign;
}

int AForm::getGradeExec (void) const
{
	return grade_to_exec;
}

int AForm::getGradeSign (void) const
{
	return grade_to_sign;
}

const std::string AForm::getName (void) const
{
	return name;
}

void AForm::beSigned(Bureaucrat *b)
{
	if (b->getGrade() <= this->getGradeSign())
		this->sign = true;
	else
		this->sign = false;
}

std::ostream &operator<<(std::ostream& os, const AForm &f)
{
	os << f.getName() << ", required grade " << f.getSign() << std::endl;
	return os;
}