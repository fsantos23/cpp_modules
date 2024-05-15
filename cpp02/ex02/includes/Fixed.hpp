#ifndef FIXED_HPP
#define FIXED_HPP

#include <string>
#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <cctype>
#include <cmath>

class Fixed {
    private:
        int num;
        static const int bits = 8;

    public:
        Fixed(void);
        Fixed(int value);
        Fixed(float value);
        Fixed(Fixed const & src);
        Fixed& operator= (Fixed const & rhs);
        ~Fixed(void);


        int getRawBits( void ) const;
        void setRawBits( int const raw );
        float toFloat( void ) const;
        int toInt( void ) const;

        //operators overload
        friend std::ostream& operator<<(std::ostream& os, const Fixed& fixed);
        Fixed operator+ (Fixed const & rhs);
        Fixed operator* (Fixed const & rhs);
        Fixed operator/ (Fixed const & rhs);
        Fixed operator- (Fixed const & rhs);
        bool operator== (Fixed const & rhs) const;
        bool operator<= (Fixed const & rhs) const;
        bool operator>= (Fixed const & rhs) const;
        bool operator!= (Fixed const & rhs) const;
        bool operator< (Fixed const & rhs) const;
        bool operator> (Fixed const & rhs) const;
        Fixed operator++( int );
        Fixed& operator++( void );
        Fixed operator--( void );
        Fixed& operator--( int );

        static Fixed &min(Fixed &a, Fixed &b);
        static Fixed &max(Fixed &a, Fixed &b);
        static const Fixed &min(const Fixed &a, const Fixed &b);
        static const Fixed &max(const Fixed &a, const Fixed &b);
};


#endif 