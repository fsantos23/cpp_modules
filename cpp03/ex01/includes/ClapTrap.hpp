#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

// ------ colors ------ //
// Regular text colors
#define RESET   "\033[0m"       // Reset color
#define BLACK   "\033[30m"      // Black
#define RED     "\033[31m"      // Red
#define GREEN   "\033[32m"      // Green
#define YELLOW  "\033[33m"      // Yellow
#define BLUE    "\033[34m"      // Blue
#define MAGENTA "\033[35m"      // Magenta
#define CYAN    "\033[36m"      // Cyan
#define WHITE   "\033[37m"      // White

// Bold text colors
#define BOLD_BLACK   "\033[1;30m"     // Bold Black
#define BOLD_RED     "\033[1;31m"     // Bold Red
#define BOLD_GREEN   "\033[1;32m"     // Bold Green
#define BOLD_YELLOW  "\033[1;33m"     // Bold Yellow
#define BOLD_BLUE    "\033[1;34m"     // Bold Blue
#define BOLD_MAGENTA "\033[1;35m"     // Bold Magenta
#define BOLD_CYAN    "\033[1;36m"     // Bold Cyan
#define BOLD_WHITE   "\033[1;37m"     // Bold White

class ClapTrap {
    protected:
        std::string _name;
        int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;

    public:
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const &src);
		ClapTrap& operator=(ClapTrap const & rhs);
		~ClapTrap(void);

		virtual void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		int getDamage( void ) const;
		void setDamage( int amount );
};

#endif