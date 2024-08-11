#include "../includes/Bureaucrat.hpp"
#include "../includes/AForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"

// Nao tenho a certeza do required to exec e o required to sign

int main (int ac, char **av)
{
	if(ac != 3)
	{
		std::cout << "Not enough arguments" << std::endl;
		return 1;
	}
	try
	{
		Bureaucrat b(av[1], atoi(av[2]));
		std::cout << b;


		AForm *p = new PresidentialPardonForm(av[1]);
		AForm *r = new RobotomyRequestForm(av[1]);
		AForm *s = new ShrubberyCreationForm(av[1]);
		
		b.executeForm(*p);
		b.executeForm(*r);
		b.executeForm(*s);
		delete p;
		delete r;
		delete s;
	}
	catch (const Bureaucrat::GradeTooLowException& e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (const Bureaucrat::GradeTooHighException& e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (const AForm::GradeTooHighException& e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (const AForm::GradeTooLowException& e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}