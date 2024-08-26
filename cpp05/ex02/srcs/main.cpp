#include "../includes/Bureaucrat.hpp"
#include "../includes/AForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"

int is_number(std::string word)
{
	for(unsigned int i = 0; i < word.length(); i++)
	{
		if(!std::isdigit(word[i]))
			return 1;
	}
	return 0;
}

int is_alpha(std::string word)
{
	for(unsigned int i = 0; i < word.length(); i++)
	{
		if(!std::isalpha(word[i]))
			return 1;
	}
	return 0;
}

int main (int ac, char **av)
{
	if(ac != 3 || is_alpha(av[1]) || is_number(av[2]))
	{
		std::cout << "Arguments are wrong" << std::endl;
		return 1;
	}
	AForm *p = new PresidentialPardonForm(av[1]);
	AForm *r = new RobotomyRequestForm(av[1]);
	AForm *s = new ShrubberyCreationForm(av[1]);
	try
	{
		Bureaucrat b(av[1], atoi(av[2]));
		std::cout << b;

		p->beSigned(&b);
		b.signForm(p);
		b.executeForm(*p);

		r->beSigned(&b);
		b.signForm(r);
		b.executeForm(*r);

		s->beSigned(&b);
		b.signForm(s);
		b.executeForm(*s);
		
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
	delete p;
	delete r;
	delete s;

	return 0;
}