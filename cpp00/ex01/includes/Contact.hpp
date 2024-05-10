#ifndef CONTACT_HPP
#define CONTACT_HPP

#include "PhoneBook.hpp"
#include <string>
#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <cctype>
#include <cstdlib>

class Contact {
    public:

        PhoneBook info;
        PhoneBook createContact(void);
};

std::string printMessage(std::string print);
void printContacts(Contact *Contacts);
void printInput(void);
int notEmpty(PhoneBook info);
int check_name(const char *data);
int check_phone(std::string data);

#endif