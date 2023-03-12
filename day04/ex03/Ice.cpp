#include "Ice.hpp"

Ice::Ice()
{
    this->type = "ice";
    std::cout << "Ice's default constructor called" << std::endl;
}

Ice::~Ice()
{
    std::cout << "Ice's destructor called" << std::endl;
}

Ice::Ice(const Ice& obj) : AMateria(obj)
{
    std::cout << "Ice's copy constructor called" << std::endl;
}

Ice& Ice::operator=(const Ice& obj)
{
    std::cout << "Ice's assignation operator called" << std::endl;
    this->type = obj.type;
    return *this;
}

AMateria* Ice::clone() const
{
    return new Ice(*this);
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}