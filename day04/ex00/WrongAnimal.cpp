#include "WrongAnimal.hpp"

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
    std::cout << "WrongAnimal's default constructor called" << std::endl;
    this->type = "WrongAnimal";
}

WrongAnimal::~WrongAnimal(){
    std::cout << "WrongAnimal's destructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& obj){
    this->type = obj.type;
    return *this;
}

WrongAnimal::WrongAnimal(const WrongAnimal& obj){
    *this = obj;
}

void    WrongAnimal::makeSound() const
{
    std::cout << "\033[1;31m" << "This is not right, i should meow" << "\033[0m" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return this->type;
}