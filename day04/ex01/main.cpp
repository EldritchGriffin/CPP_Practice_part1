#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    int size = 5;
    Animal  *animals[size];

    for(int i = 0; i < size / 2 ; i++)
    {
        animals[i] = new Dog;
    }
    for(int i = size / 2 ; i < size; i++)
    {
        animals[i] = new Cat;
    }

    for(int i = 0 ; i < size ; i++)
    {
        std::cout << animals[i]->getType() << std::endl;
        animals[i]->makeSound();
    }
    for(int i = 0 ; i < size ; i++)
    {
        delete animals[i];
    }
}