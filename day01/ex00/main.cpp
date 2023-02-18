#include "Zombie.hpp"

int main()
{
    Zombie *zombie1 = newZombie("BucketHead");
    zombie1->announce(); 
    delete zombie1;
    randomChump("sahalantropus");
    return (0);
}