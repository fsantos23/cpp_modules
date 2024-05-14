#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include "Weapon.hpp"

class HumanB {
    private:
        std::string name;
        Weapon* weapon;
    
    public:
        HumanB(std::string name);
        HumanB(HumanB const & src);
        HumanB & operator= (HumanB const & rhs);
        ~HumanB(void);

        std::string getName(void) const;
        void setName(std::string type);

        void setWeapon(Weapon weapon);
        void attack (void);
};

#endif