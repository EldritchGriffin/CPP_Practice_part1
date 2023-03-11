#include "WrongCat.hpp"

WrongCat::WrongCat(){
    std::cout << "WrongCat's default constructor called" << std::endl;
    this->type = "WrongCat";
}

WrongCat::~WrongCat(){
    std::cout << "WrongCat's destructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& obj){
    this->type = obj.type;
    return *this;
}

WrongCat::WrongCat(const WrongCat& obj){
    *this = obj;
}

void    WrongCat::makeSound() const
{
    std::cout << "Meow!" << std::endl;
}