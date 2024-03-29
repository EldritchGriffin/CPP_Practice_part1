#include "Cure.hpp"

Cure::Cure()
{
    this->type = "cure";
    std::cout << "Cure's default constructor called" << std::endl;
}

Cure::~Cure()
{
    std::cout << "Cure's destructor called" << std::endl;
}

Cure::Cure(const Cure& obj) : AMateria(obj)
{
    std::cout << "Cure's copy constructor called" << std::endl;
}

Cure& Cure::operator=(const Cure& obj)
{
    std::cout << "Cure's assignation operator called" << std::endl;
    this->type = obj.type;
    return *this;
}

AMateria* Cure::clone() const
{
    return new Cure(*this);
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
