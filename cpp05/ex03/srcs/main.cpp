#include "../includes/Bureaucrat.hpp"
#include "../includes/AForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/Intern.hpp"
#include <cctype>
#include <iostream>

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
	if(ac != 4 || is_alpha(av[1]) || is_number(av[2]) || is_alpha(av[3]))
	{
		std::cout << "Arguments are wrong" << std::endl;
		return 1;
	}
	Intern h;
	AForm *f = h.makeForm(av[3], av[1]);
	if(!f)
		return 1;
	try
	{
		Bureaucrat b(av[1], atoi(av[2]));
		std::cout << b;

		f->beSigned(&b);
		b.signForm(f);
		b.executeForm(*f);
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
	delete f;

	return 0;
}