#include "../includes/MyAwesomePhoneBook.hpp"

std::string printMessage(std::string print, int h)
{
    std::string info;
    int i = 0;

    std::cout << print << std::endl;
    std::getline(std::cin, info);
    if(h)
        return info;
    if (info.size() >= 10)
    {
        while (info[i])
        {
            if (i == 9)
                info[i] = '.';
            else if (i > 9)
                info[i] = 0;
            i++;
        }
    }
    else
    {
        int spaces = 9 - info.size();
        std::string tmp = info;
        while(spaces >= 0)
        {
            info.insert(i, " ");
            i++;
            spaces--;
        }
        int j = 0;
        while(tmp[j])
        {
            info[i] = tmp[j];
            i++;
            j++;
        }
    }
    return info;
}

void printContacts(Contact *newContact)
{
    int i = 0;
    std::string exit;

    std::cout << "   Index  |First Name| Last Name| Nickname " << std::endl;
    while(i <= 7)
    {
        std::cout << "-------------------------------------------" << std::endl;
        if(!notEmpty(newContact[i].info))
            break ;
        std::cout << "    " << i << "     |" << newContact[i].info.firstName << "|" << newContact[i].info.lastName << "|" << newContact[i].info.nickname << std::endl;
        i++;
    }
    std::cout << "If you want to exit the search menu press enter" << std::endl;
    getline(std::cin, exit);
    std::cout << "\033[2J\033[1;1H";
}

void printInput(void)
{
    std::cout << "WHAT DO YOU WANT TO DO ?" << std::endl;
    std::cout << "-> ADD" << std::endl;
    std::cout << "-> SEARCH" << std::endl;
    std::cout << "-> EXIT" << std::endl;
    std::cout << "-> ";
}