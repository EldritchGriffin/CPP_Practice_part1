#include "Dog.hpp"

Dog::Dog(){
    std::cout << "Dog's default constructor called" << std::endl;
    this->type = "Dog";
    this->brain = new Brain;
}

Dog::~Dog(){
    delete this->brain;
    std::cout << "Dog's destructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& obj){
    this->type = obj.type;
    return *this;
}

Dog::Dog(const Dog& obj){
    *this = obj;
}

void    Dog::makeSound() const
{
    std::cout << "\033[1;32m" << "Bark, Bark!" << "\033[0m" << std::endl;
}
