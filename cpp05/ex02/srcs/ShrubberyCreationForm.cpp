#include "../includes/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm (const std::string target) : target(target), AForm("Shubbery Form", 145, 137)
{

}

ShrubberyCreationForm::~ShrubberyCreationForm (void)
{

}


void ShrubberyCreationForm::execute(Bureaucrat const & executor)
{
	if (this->getGradeExec() <= executor.getGrade())
	{
		std::string file_name = target + "_shrubbery";
		std::ofstream outfile(file_name);

		outfile << "       _-_" << std::endl;
		outfile << "    /~~   ~~\\" << std::endl;
		outfile << " /~~         ~~\\" << std::endl;
		outfile << "{               }" << std::endl;
		outfile << " \\  _-     -_  /" << std::endl;
		outfile << "   ~  \\ //  ~" << std::endl;
		outfile << "_- -   | | _- _" << std::endl;
		outfile << "  _ -  | |   -_" << std::endl;
		outfile << "      // \\" << std::endl;
		outfile.close();
	}
	else
		std::cout << "Couldn't execute Shubbery Form, because grade is " << executor.getGrade() << std::endl; 
}