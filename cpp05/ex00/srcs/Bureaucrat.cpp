#include "../includes/Bureaucrat.hpp"

Bureaucrat::Bureaucrat (void)
{
	std::cout << "Invalid bureaucrat" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : name(name)
{
	if (grade > 150)
		throw GradeToLowException();
	if (grade < 1)
		throw GradeTooHighException();
	this->grade = grade;
}

Bureaucrat::~Bureaucrat (void)
{

}

const char *Bureaucrat::GradeToLowException::what() const throw()
{
	return "Grade too low";
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade too high";
}

const std::string Bureaucrat::getName (void) const
{
	return name;
}

int Bureaucrat::getGrade (void) const
{
	return grade;
}

void Bureaucrat::upGrade (void)
{
	if(grade - 1 < 1)
		throw GradeTooHighException();
	grade--;
}

void Bureaucrat::downGrade (void)
{
	if(grade + 1 > 150)
		throw GradeToLowException();
	grade++;
	
}

std::ostream &operator<<(std::ostream& os, const Bureaucrat &b)
{
	os << b.getName() << ", bureaucrat grade " << b.getGrade() << std::endl;
	return os;
}