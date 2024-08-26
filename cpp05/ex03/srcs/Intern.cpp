#include "../includes/Intern.hpp"
#include "../includes/AForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"

Intern::Intern (void)
{

}

Intern::~Intern (void)
{

}

AForm *Intern::makeForm (std::string form, std::string target)
{
	std::string formMap[3] = {"shrubbery", "robotomy", "presidential"};
	AForm* formArray[3] = {
        new ShrubberyCreationForm(target),
        new RobotomyRequestForm(target),
        new PresidentialPardonForm(target)
    };

	for(int i = 0; i < 3; i++)
	{
		if(form == formMap[i])
		{
 			for (int j = 0; j < 3; j++)
			{
            	if (i != j)
                    delete formArray[j];
            }
			return formArray[i];
		}
	}
	for (int i = 0; i < 3; i++)
        delete formArray[i];
	std::cout << "Form doesn't exist" << std::endl;
    return NULL;
}