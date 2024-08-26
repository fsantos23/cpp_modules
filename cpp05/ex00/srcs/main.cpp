#include "../includes/Bureaucrat.hpp"

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