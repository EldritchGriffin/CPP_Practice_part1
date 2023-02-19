#include <iostream>

int main()
{
    std::string brain = "HI THIS IS BRAIN";
    std::string *thebrain = &brain;
    std::string &brain2 = brain;



    std::cout << &brain << std::endl;
    std::cout << thebrain << std::endl;
    std::cout << &brain2 << std::endl;


    std::cout << brain << std::endl;
    std::cout << *thebrain << std::endl;
    std::cout << brain2 << std::endl;

    return (0);
}