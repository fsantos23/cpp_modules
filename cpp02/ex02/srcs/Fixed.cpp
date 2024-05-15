#include "Fixed.hpp"

Fixed::Fixed (void) : num(0)
{

}

Fixed::Fixed (int value) : num(value << this->bits)
{

}

Fixed::Fixed (float value) : num(roundf(value * (1 << this->bits)))
{

}

Fixed::~Fixed(void)
{

}


Fixed::Fixed(Fixed const & src) : num(src.num)
{

}

Fixed& Fixed::operator=(Fixed const & rhs)
{
    if (this != &rhs)
        num = rhs.num;
    return *this;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
    os << fixed.toFloat();
    return os;
}

int Fixed::getRawBits ( void ) const
{
    return this->num;
}

void Fixed::setRawBits( int const raw )
{
    this->num = raw;
}

float Fixed::toFloat(void) const
{
    return (static_cast<float>(this->num) / (1 << this->bits));
}

int Fixed::toInt(void) const
{
    return (static_cast<int>(this->num >> this->bits));
}

bool Fixed::operator!=(Fixed const & rhs) const
{
    return !(this == &rhs);
}

bool Fixed::operator<=(Fixed const & rhs) const
{
    return !(this > &rhs);
}


bool Fixed::operator>=(Fixed const & rhs) const
{
    return !(this < &rhs);
}


bool Fixed::operator<(Fixed const & rhs) const
{
    return this < &rhs;
}

bool Fixed::operator>(Fixed const & rhs) const
{
    return this > &rhs;
}

bool Fixed::operator==(Fixed const & rhs) const
{
    return this == &rhs;
}

Fixed Fixed::operator-(Fixed const & rhs)
{
    return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed Fixed::operator+(Fixed const & rhs)
{
    return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed Fixed::operator*(Fixed const & rhs)
{
    return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/(Fixed const & rhs)
{
    return Fixed(this->toFloat() / rhs.toFloat());
}
//++a
Fixed &Fixed::operator++( void )
{
    num++;
    return *this;
}
//a++
Fixed Fixed::operator++( int )
{
    Fixed tmp = *this;
    num++;
    return tmp;
}
//--a
Fixed &Fixed::operator--( int )
{
    num--;
    return *this;
}
//a--
Fixed Fixed::operator--( void )
{
    Fixed tmp = *this;
    num--;
    return tmp;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    return((a.num > b.num) ? a : b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
    return((a.num > b.num) ? a : b);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    return((a.num < b.num) ? a : b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
    return((a.num < b.num) ? a : b);
}