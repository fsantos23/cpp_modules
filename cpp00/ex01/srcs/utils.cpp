#include "../includes/MyAwesomePhoneBook.hpp"

int notEmpty(PhoneBook info)
{
    if(info.firstName.empty())
        return 0;
    if(info.lastName.empty())
        return 0;
    if(info.nickname.empty())
        return 0;
    if(info.phoneNumber.empty())
        return 0;
    if(info.darkSecret.empty())
        return 0;
    return 1;
}