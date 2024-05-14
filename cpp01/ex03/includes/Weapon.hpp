#ifndef WEAPON_H
#define WEAPON_H

#include <string>
#include <iostream>
#include <iomanip>
#include <sstream>
#include <cctype>

class Weapon {
    private:
        std::string type;
    
    public:
        Weapon(std::string type);
        Weapon(Weapon const & src);
        Weapon & operator= (Weapon const & rhs);
        ~Weapon(void);

        std::string getType(void) const;
        void setType(std::string type);

};

#endif