#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
    protected:
        std::string type;
    public:

    //cannonical form;

    AMateria();
    AMateria(std::string const & type);
    virtual ~AMateria();
    AMateria(const AMateria& obj);
    AMateria& operator= (const AMateria& obj);

    //member functions;

    virtual void use(ICharacter& target);
    virtual AMateria* clone() const = 0;
    std::string const & getType() const;
};


#endif