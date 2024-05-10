#include "Contact.hpp"

void PhoneBook::setString(int i, std::string str)
{
    if (str.empty())
        return ;
    if (i == 0)
        this->firstName = str;
    if (i == 1)
        this->lastName = str;
    if (i == 2)
        this->phoneNumber = str;
    if (i == 3)
        this->darkSecret = str;
    if (i == 4)
        this->nickname = str;
}

std::string PhoneBook::getString(int i) const
{
    if (i == 0)
        return this->firstName;
    if (i == 1)
        return this->lastName;
    if (i == 2)
        return this->phoneNumber;
    if (i == 3)
        return this->darkSecret;
    if (i == 4)
        return this->nickname;
    return NULL;
}

std::string printMessage(std::string print, int h)
{
    std::string info;
    std::string null;
    int i = 0;

    std::cout << print << std::endl;
    std::getline(std::cin, info);
    if (!check_name(info.c_str()) && !h)
        return null;
    if(h)
    {
        if (!check_phone(info))
            return null;
        return info;
    }
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

    std::cout << "   Index  |First Name| Last Name| Nickname |" << std::endl;
    while(i <= 7)
    {
        std::cout << "-------------------------------------------" << std::endl;
        if(!notEmpty(newContact[i].info))
            break ;
        std::cout << "    " << i << "     |" << newContact[i].info.getString(0) << "|" << newContact[i].info.getString(1) << "|" << newContact[i].info.getString(4) << "|" << std::endl;
        i++;
    }
    std::cout << std::endl;
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