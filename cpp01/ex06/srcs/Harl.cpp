#include "Harl.hpp"

Harl::Harl(void)
{
    std::cout << "Harl is going to start complaining" << std::endl;
}

Harl::~Harl(void)
{
    std::cout << "Hoppefully Harl has stoped complaining" << std::endl;
}

void Harl::complain (std::string level)
{
	int i = 0;
	std::string array[4] = {"debug", "info", "warning", "error"};

	while(i < 4)
	{
		if (array[i] == level)
			break ;
		i++;
	}
	switch(i)
	{
		case 0:
			debug();
		case 1:
			info();
		case 2:
			warning();
		case 3:
			error();
			break;
		default:
			std::cout << GREEN << "*Hoppefully Harl is quiet*" << RESET << std::endl;
	}
	std::cout << "----------------------------------------------------" << std::endl;
}

void Harl::debug(void)
{
    std::cout << BLUE <<  "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << RESET << std::endl;
}

void Harl::info(void)
{
    std::cout << YELLOW <<  "I cannot believe adding extra bacon costs more money. You didn’t put ";
    std::cout << "enough bacon in my burger! If you did, I wouldn’t be asking for more!" << RESET << std::endl;
}

void Harl::warning(void)
{
    std::cout << MAGENTA << "I think I deserve to have some extra bacon for free. I’ve been coming for ";
    std::cout << "years whereas you started working here since last month." << RESET << std::endl;
}

void Harl::error(void)
{
    std::cout << BOLD_RED <<  "This is unacceptable! I want to speak to the manager now." << RESET << std::endl;
}