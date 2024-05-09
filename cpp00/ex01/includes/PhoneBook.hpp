#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string>

class PhoneBook {
    public:

        std::string getString(int i) const;
        void setString(int i, std::string str);
    
    private: 

        std::string firstName;
        std::string lastName;
        std::string phoneNumber;
        std::string darkSecret;
        std::string nickname;
};

#endif