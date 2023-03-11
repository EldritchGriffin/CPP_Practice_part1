#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    //try to instatiate an animal object here;

    Animal  *animal = new Dog;
    animal->makeSound();
    delete animal;
    return 0;
}