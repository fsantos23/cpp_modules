#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>
#include "Weapon.hpp"

class HumanA {
    private:
        std::string name;
        const Weapon& weapon;
    
    public:
        HumanA(std::string name, const Weapon& weapon);
        HumanA(HumanA const & src);
        HumanA & operator= (HumanA const & rhs);
        ~HumanA(void);

        std::string getName(void) const;
        void setName(std::string type);
        
        void attack (void);
};

#endif