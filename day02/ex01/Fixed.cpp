#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->fixedvalue = 0;
}

Fixed::Fixed(const Fixed& obj)
{
    std::cout << "copy constructor called" << std::endl;
    *this = obj;
}

Fixed::Fixed(const int val)
{
    this->fixedvalue = val << this->fractional_bits;
}

Fixed::Fixed(const float val)
{
    this->fixedvalue = roundf(val * (1 << this->fractional_bits));
}

float Fixed::toFloat( void ) const
{
    return ((float)this->fixedvalue / (1 << this->fractional_bits));
}
int Fixed::toInt( void ) const
{
    return (this->fixedvalue >> this->fractional_bits);
}

Fixed& Fixed::operator = (const Fixed& obj)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->fixedvalue = obj.getRawBits();
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->fixedvalue);
}

void Fixed::setRawBits( int const raw )
{
    std::cout << "setRawBits member function called" << std::endl;
    this->fixedvalue = raw;
}

std::ostream& operator<<(std::ostream& output, const Fixed& fixed)
{
    output << fixed.toFloat();
    return (output);
}