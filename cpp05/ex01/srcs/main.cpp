#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"

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
	if(ac != 4 || is_alpha(av[1]) || is_number(av[2]) || is_number(av[3]))
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