#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"

// Nao tenho a certeza do required to exec e o required to sign

int main (int ac, char **av)
{
	if(ac != 4)
	{
		std::cout << "Not enough arguments" << std::endl;
		return 1;
	}
	try
	{
		Bureaucrat b(av[1], atoi(av[2]));
		std::cout << b;

		b.downGrade();
		std::cout << b;
		b.upGrade();
		std::cout << b;
		Form f("form", atoi(av[3]), b.getGrade());
		f.beSigned(&b);
		b.signForm(&f);
	}
	catch (const Bureaucrat::GradeTooLowException& e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (const Bureaucrat::GradeTooHighException& e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (const Form::GradeTooHighException& e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (const Form::GradeTooLowException& e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}