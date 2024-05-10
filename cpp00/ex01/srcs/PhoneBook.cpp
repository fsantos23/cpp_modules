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

std::string printMessage(std::string print)
{
    std::string info;

    std::cout << print << std::endl;
    std::getline(std::cin, info);
    return info;
}

void searchTable(std::string index, Contact Contacts[8])
{
    int id = std::atoi(index.c_str());
    std::string tmp;
    
    if(index < "0" || index > "7")
    {
        std::cout << "index not valid" << std::endl;
        return ;
    }
    if(!notEmpty(Contacts[id].info))
        std::cout << "index not valid" << std::endl;
    else
    {
        std::cout << "First Name -" << Contacts[id].info.getString(0) << std::endl;
        std::cout << "Last Name -" << Contacts[id].info.getString(1) << std::endl;
        std::cout << "Nickname -" << Contacts[id].info.getString(4) << std::endl;
        std::cout << "Phonenumber -" << Contacts[id].info.getString(2) << std::endl;
        std::cout << "Dark Secret -" << Contacts[id].info.getString(3) << std::endl;
    }
    std::cout << "To exit press enter" << std::endl;
    std::getline(std::cin, tmp);
}

std::string limitString(const std::string& str)
{
    int spaces = 9 - str.length();  
    std::string new_str;

    if (str.length() < 9)
    {
        int j = 0;
        while(spaces != -1)
        {
            new_str.insert(j, " ");
            spaces--;
            j++;
        }
        int i = 0;
        while(str[i])
        {
            new_str.insert(j, 1, str[i]);
            j++;
            i++;
        }
        return new_str;
    }
    else
        return str.substr(0, 9) + ".";
}

void printContacts(Contact Contacts[8])
{
    int i = 0;
    std::string index;

    std::cout << "   Index  |First Name| Last Name| Nickname |" << std::endl;
    while(i <= 7)
    {
        std::cout << "-------------------------------------------" << std::endl;
        if(!notEmpty(Contacts[i].info))
            break ;
        std::cout << "    " << i << "     |" << limitString(Contacts[i].info.getString(0)) << "|" << limitString(Contacts[i].info.getString(1)) << "|" << limitString(Contacts[i].info.getString(4)) << "|" << std::endl;
        i++;
    }
    std::cout << std::endl;
    std::cout << "If you want to search the menu press choose an index" << std::endl;
    getline(std::cin, index);
    searchTable(index, Contacts);
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