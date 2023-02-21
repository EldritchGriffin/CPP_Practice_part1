#include <iostream>
#include <cmath>

#ifndef FIXED_HPP
#define FIXED_HPP

class   Fixed
{
    private:
        int                 fixedvalue;
        static const int    fractional_bits = 8;
    public:
        Fixed();
        Fixed(const int val);
        Fixed(const float val);
        Fixed(const Fixed& obj);
        Fixed& operator = (const Fixed&  obj);
        ~Fixed();

        float toFloat( void ) const;
        int toInt( void ) const;
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};

std::ostream& operator<<(std::ostream& output, const Fixed& fixed);


#endif