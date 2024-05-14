#include "Fixed.hpp"

Fixed::Fixed (void) : num(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed (int value) : num(value << this->bits)
{
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed (float value) : num(roundf(value * (1 << this->bits)))
{
    std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}


Fixed::Fixed(Fixed const & src) : num(src.num)
{
    std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(Fixed const & rhs)
{
    std::cout << "Copy assignment operator called" << std::endl;
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
    std::cout << "getRawBits member function called" << std::endl;
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