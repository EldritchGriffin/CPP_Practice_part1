#include "Animal.hpp"

Animal::Animal(){
    std::cout << "Animal's default constructor called" << std::endl;
    this->type = "Animal";
}

Animal::~Animal(){
    std::cout << "Animal's destructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& obj){
    this->type = obj.type;
    return *this;
}

Animal::Animal(const Animal& obj){
    *this = obj;
}

void    Animal::makeSound() const
{
    std::cout << "\033[1;32m" << "suddenly, you can hear your ancestors." << "\033[0m" << std::endl;
}

std::string Animal::getType() const
{
    return this->type;
}