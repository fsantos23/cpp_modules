#include "Contact.hpp"

int notEmpty(PhoneBook info)
{
    if(info.getString(0).empty())
        return 0;
    if(info.getString(1).empty())
        return 0;
    if(info.getString(2).empty())
        return 0;
    if(info.getString(3).empty())
        return 0;
    if(info.getString(4).empty())
        return 0;
    return 1;
}