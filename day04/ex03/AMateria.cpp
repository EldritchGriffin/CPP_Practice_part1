#include "AMateria.hpp"

AMateria::AMateria(){std::cout << "AMateria's default constructor called" << std::endl;}

AMateria::~AMateria(){std::cout << "AMateria's destructor called" << std::endl;}

AMateria::AMateria(std::string const& type){this->type = type;}

AMateria::AMateria(const AMateria& obj){*this = obj;}

AMateria& AMateria::operator=(const AMateria& obj)
{
    this->type = obj.type;
    return *this;
}

void AMateria::use(ICharacter& target)
{
    std::cout << target.getName();
    std::cout << "AMateria's use function called" << std::endl;
}

AMateria*   AMateria::clone() const{
    return (AMateria*)this;
}

std::string const& AMateria::getType() const {return this->type;}
