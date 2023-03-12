#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{
    public:
        Ice();
        virtual ~Ice();
        Ice(const Ice& obj);
        Ice& operator= (const Ice& obj);

        virtual AMateria* clone() const;
        virtual void use(ICharacter& target);
};

#endif