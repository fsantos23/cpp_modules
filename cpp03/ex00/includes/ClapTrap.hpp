#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap {
    private:
        std::string _name;
        int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;

    public:
		ClapTrap(std::string _name);
		ClapTrap(ClapTrap const &src);
		ClapTrap& operator=(ClapTrap const & rhs);
		~ClapTrap(void);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		int getDamage( void ) const;
		void setDamage( int amount );
};

#endif