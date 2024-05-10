#include "Contact.hpp"

int check_name(const char *data)
{
    int i = 0;
    std::string gsgs;
    if (!data)
        return 0;
    std::cout << data << std::endl;
    while(data[i])
    {
        while(data[i] == ' ')
            i++;
        if ((data[i] < 'a' || data[i] > 'z') && (data[i] < 'A' || data[i] > 'Z') && data[i] != '\n' && data[i] != '.')
            return 0;
        i++;
    }
    return 1;
}

int check_phone(std::string data)
{
    if(data.size() != 9)
        return 0;
    for (size_t i = 0; i < data.size(); i++)
    {
        if (!std::isdigit(data[i]))
            return 0;
    }
    return 1;
}

PhoneBook Contact::createContact()
{
    PhoneBook data;

    std::cout << "\033[2J\033[1;1H";
    data.setString(0, printMessage("What is your name ?", 0));
    data.setString(1, printMessage("What is your Surname ?", 0));
    data.setString(4, printMessage("What is your Nickname ?", 0));
    data.setString(2, printMessage("What is your phone number ?", 1));
    data.setString(3, printMessage("What is your dark secret ?", 0));
    return data;
}

int main()
{
    int size = 0;
    int flag = 0;
    std::string choise;
    Contact newContact[8];

    while(1)
    {
        std::cout << "\033[2J\033[1;1H";
        printInput();
        if (flag)
        {
            std::cout << "\033[2J\033[1;1H";
            std::cout << "Not a valid input!" << std::endl;
            flag = 0;
            std::getline(std::cin, choise);
            std::cout << "\033[2J\033[1;1H";
            printInput();
        }
        if(std::cin.eof())
        {
            std::cout << std::endl;
            break ;
        }
        std::getline(std::cin, choise);
        if(size == 8 && choise == "ADD")
            size = 0;
        if(choise == "ADD")
        {
            newContact[size].info = newContact[size].createContact();
            if (notEmpty(newContact[size].info))
                (size)++;
            else
                flag = 1;
        }
        else if(choise == "SEARCH")
            printContacts(newContact);
        else if(choise == "EXIT")
        {
            std::cout << "Exit sucessfully" << std::endl;
            break ;
        }
        else
            flag = 1;
    }
}