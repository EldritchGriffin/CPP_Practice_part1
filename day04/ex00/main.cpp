#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const WrongAnimal* k = new WrongCat();
    std::cout << "\033[1;32m" << j->getType() << "\033[0m" << std::endl;
    std::cout << "\033[1;32m" << i->getType() << "\033[0m" << std::endl;
    std::cout << "\033[1;31m" << k->getType() << "\033[0m" << std::endl;
    j->makeSound();
    i->makeSound();
    k->makeSound();
    meta->makeSound();
    delete meta;
    delete j;
    delete i;
    delete k;
    return 0;
}