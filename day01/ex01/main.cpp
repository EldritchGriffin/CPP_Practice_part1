#include "Zombie.hpp"

int main()
{
    Zombie  *horde;
    horde = zombieHorde(4, "randomchump");

    delete[]horde;
}