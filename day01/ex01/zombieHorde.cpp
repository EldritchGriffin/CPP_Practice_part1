#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    int i = 0;
    Zombie  *theHorde = new Zombie[N];
    while(i < N)
    {
        theHorde[i].set_name(name);
        theHorde[i].announce();
        i++;
    }
    return (theHorde);
}
