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

Fixed Fixed::operator + (const Fixed&  obj) const
{
    Fixed   res;
    res.fixedvalue = this->fixedvalue + obj.fixedvalue;
    return (res);
}

Fixed Fixed::operator - (const Fixed&  obj) const
{
    Fixed res;
    res.fixedvalue = this->fixedvalue - obj.fixedvalue;
    return (res);
}

Fixed Fixed::operator / (const Fixed&  obj) const
{
    Fixed res;
    res.fixedvalue = (((int64_t)this->fixedvalue * (1 << this->fractional_bits)) / obj.fixedvalue);
    return (res);
}

Fixed Fixed::operator * (const Fixed&  obj) const
{
    Fixed res;

    res.fixedvalue = this->fixedvalue * obj.fixedvalue / (1 << this->fractional_bits);
    return (res);
}

Fixed Fixed::operator ++ (void)
{
    this->fixedvalue++;
    return (*this);
}

Fixed Fixed::operator ++ (int)
{
    Fixed res(*this);
    this->fixedvalue++;
    return (res);
}

Fixed Fixed::operator -- (void)
{
    this->fixedvalue--;
    return(*this);
}

Fixed Fixed::operator -- (int)
{
    Fixed res(*this);
    this->fixedvalue--;
    return (res);
}

bool Fixed::operator == (const Fixed&  obj) const
{
    if(this->fixedvalue == obj.fixedvalue)
        return true;
    else
        return(false);
}

bool Fixed::operator < (const Fixed&  obj) const
{
    if(this->fixedvalue < obj.fixedvalue)
        return true;
    else
        return(false);
}

bool Fixed::operator > (const Fixed&  obj) const
{
    if(this->fixedvalue > obj.fixedvalue)
        return true;
    else
        return(false);
}

bool Fixed::operator <= (const Fixed&  obj) const
{
    if(this->fixedvalue <= obj.fixedvalue)
        return true;
    else
        return(false);
}

bool Fixed::operator >= (const Fixed&  obj) const
{
    if(this->fixedvalue >= obj.fixedvalue)
        return true;
    else
        return(false);
}

bool Fixed::operator != (const Fixed&  obj) const
{
    if(this->fixedvalue != obj.fixedvalue)
        return true;
    else
        return(false);
}

std::ostream& operator<<(std::ostream& output, const Fixed& fixed)
{
    output << fixed.toFloat();
    return (output);
}

Fixed&  Fixed::min(Fixed& obj1, Fixed&obj2)
{
    if(obj1 < obj2)
        return (obj1);
    else
        return (obj2);
}
Fixed&  Fixed::max(Fixed& obj1, Fixed&obj2)
{
    if(obj1 > obj2)
        return (obj1);
    else
        return (obj2);
}
const Fixed&  Fixed::min(const Fixed& obj1, const Fixed&obj2)
{
    if(obj1 < obj2)
        return (obj1);
    else
        return (obj2);
}
const Fixed&  Fixed::max(const Fixed& obj1, const Fixed&obj2)
{
    if(obj1 > obj2)
        return (obj1);
    else
        return (obj2);
}