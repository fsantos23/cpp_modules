#include "Fixed.hpp"

Fixed::Fixed (void) : num(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}


Fixed::Fixed(Fixed const & src): num(src.num)
{
    std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(Fixed const & rhs)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &rhs)
        return *this;
    return *this;
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