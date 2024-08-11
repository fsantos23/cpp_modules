#include "../includes/Bureaucrat.hpp"

Bureaucrat::Bureaucrat (void)
{
	std::cout << "Invalid bureaucrat" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : name(name)
{
	if (grade > 150)
		throw GradeTooLowException();
	if (grade < 1)
		throw GradeTooHighException();
	this->grade = grade;
}

Bureaucrat::~Bureaucrat (void)
{

}

const char *Bureaucrat::GradeTooLowException::what() const throw()
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
		throw GradeTooLowException();
	grade++;
	
}

std::ostream &operator<<(std::ostream& os, const Bureaucrat &b)
{
	os << b.getName() << ", bureaucrat grade " << b.getGrade() << std::endl;
	return os;
}

void Bureaucrat::signForm (AForm *f)
{
	if(f->getSign())
		std::cout << this->name << " signed " << f->getName() << std::endl;
	if(!f->getSign())
		std::cout << this->name << " couldn't sign " << f->getName() << " because grade neccessary is " << f->getGradeSign() << std::endl;
}

void Bureaucrat::executeForm(AForm const & form)
{
	if(form.execute(*this) == 1)
		std::cout << this->getName() << " executed " << form.getName() << std::endl;
	else
		std::cerr <<  this->getName() << " couldn't executed " << form.getName() << std::endl;
}