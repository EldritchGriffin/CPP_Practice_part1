#include "Cat.hpp"

Cat::Cat(){
    std::cout << "Cat's default constructor called" << std::endl;
    this->type = "Cat";
    this->brain = new Brain;
}

Cat::~Cat(){
    delete this->brain;
    std::cout << "Cat's destructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& obj){
    this->type = obj.type;
    return *this;
}

Cat::Cat(const Cat& obj){
    *this = obj;
}

void    Cat::makeSound() const
{
    std::cout << "\033[1;32m" << "Meow!" << "\033[0m" << std::endl;
}