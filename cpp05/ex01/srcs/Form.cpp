#include "../includes/Form.hpp"

Form::Form (const std::string name, const int grade_to_sign, const int grade_to_exec) : name(name), sign(false), grade_to_exec(grade_to_exec), grade_to_sign(grade_to_sign)
{
	if (grade_to_exec < 1 || grade_to_sign < 1)
		throw GradeTooHighException();
	if (grade_to_exec > 150 || grade_to_sign > 150)
		throw GradeTooLowException();
}

Form::~Form (void)
{

}

const char *Form::GradeTooHighException::what() const throw()
{
	return "Grade to high";
}

const char *Form::GradeTooLowException::what() const throw()
{
	return "Grade too high";
}

bool Form::getSign (void) const
{
	return sign;
}

int Form::getGradeExec (void) const
{
	return grade_to_exec;
}

int Form::getGradeSign (void) const
{
	return grade_to_sign;
}

const std::string Form::getName (void) const
{
	return name;
}

void Form::beSigned (Bureaucrat *b)
{
	if (b->getGrade() <= grade_to_sign)
		sign = true;
}

std::ostream &operator<<(std::ostream& os, const Form &f)
{
	os << f.getName() << ", required grade " << f.getSign() << std::endl;
	return os;
}