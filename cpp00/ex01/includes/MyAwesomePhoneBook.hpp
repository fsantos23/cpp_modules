#ifndef MYAWESOMEPHONEBOOK_HPP
#define MYAWESOMEPHONEBOOK_HPP

#include <string>
#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <cctype>

class PhoneBook {
    public:
        
        std::string firstName;
        std::string lastName;
        std::string phoneNumber;
        std::string darkSecret;
        std::string nickname;
};

class Contact {
    public:

        PhoneBook info;
        PhoneBook createContact(void);
        void addContact(std::string contact, PhoneBook phonebook);
};

std::string printMessage(std::string print, int h);
void printContacts(Contact *newContact);
void printInput(void);
int notEmpty(PhoneBook info);

#endif