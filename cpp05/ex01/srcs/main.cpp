#include "../includes/Bureaucrat.hpp"

int main (int ac, char **av)
{
	if(ac != 3)
		return 1;
	try
	{
		Bureaucrat b(av[1], atoi(av[2]));
		std::cout << b;

		b.downGrade();
		std::cout << b;
		b.upGrade();
		std::cout << b;
	}
	catch (const Bureaucrat::GradeToLowException& e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (const Bureaucrat::GradeTooHighException& e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}