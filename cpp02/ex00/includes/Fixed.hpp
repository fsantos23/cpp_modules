#ifndef FIXED_HPP
#define FIXED_HPP

#include <string>
#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <cctype>

class Fixed {
    private:
        int num;
        static const int bits = 8;

    public:
        Fixed(void);
        Fixed(Fixed const & src);
        Fixed& operator= (Fixed const & rhs);
        ~Fixed(void);

        int getRawBits( void ) const;
        void setRawBits( int const raw );
};


#endif 