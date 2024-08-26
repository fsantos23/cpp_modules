#include "../includes/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm (const std::string target) : AForm("Shubbery Form", 145, 137), target(target)
{

}

ShrubberyCreationForm::~ShrubberyCreationForm (void)
{

}


int ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if(this->getGradeExec() < executor.getGrade())
		return 0;

	std::string file_name = target + "_shrubbery";
	std::ofstream outfile(file_name.c_str());

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
	return 1;
}