#include "Brain.hpp"

Brain::Brain(){
    std::cout << "Brain's default constructor called" << std::endl;
}

Brain::~Brain(){
    std::cout << "Brain's destructor called" << std::endl;
}

Brain& Brain::operator=(const Brain& obj)
{
    if (this != &obj) 
    {
        for (int i = 0; i < 100; i++)
        {
            this->ideas[i] = obj.ideas[i];
        }
    }
    return *this;
}


Brain::Brain(const Brain& obj){
    *this = obj;
}

