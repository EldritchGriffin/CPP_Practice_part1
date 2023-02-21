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
        ~Fixed();
        Fixed& operator = (const Fixed&  obj);

        Fixed operator + (const Fixed&  obj) const;
        Fixed operator - (const Fixed&  obj) const;
        Fixed operator / (const Fixed&  obj) const;
        Fixed operator * (const Fixed&  obj) const;
        
        Fixed operator ++ (int);
        Fixed operator ++ (void);
        Fixed operator -- (int);
        Fixed operator -- (void);

        bool operator == (const Fixed&  obj) const;
        bool operator < (const Fixed&  obj) const;
        bool operator > (const Fixed&  obj) const;
        bool operator <= (const Fixed&  obj) const;
        bool operator >= (const Fixed&  obj) const;
        bool operator != (const Fixed&  obj) const;

        float toFloat( void ) const;
        int toInt( void ) const;
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        static  Fixed&  min(Fixed& obj1, Fixed&obj2);
        static  Fixed&  max(Fixed& obj1, Fixed&obj2);
        static  const Fixed&  min(const Fixed& obj1, const Fixed&obj2);
        static  const Fixed&  max(const Fixed& obj1, const Fixed&obj2);
};

std::ostream& operator<<(std::ostream& output, const Fixed& fixed);

#endif