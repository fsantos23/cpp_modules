#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>
#include <iomanip>
#include <sstream>
#include <cctype>

class Zombie {
    private :
    
        std::string name;

    public :

        Zombie(void);
        Zombie(Zombie const & src);
        Zombie & operator= (Zombie const & rhs);
        ~Zombie(void);

        std::string getZombie(void) const;
        void setZombie(std::string);
        void announce (int i);
};

Zombie* zombieHorde(int N, std::string name);

#endif