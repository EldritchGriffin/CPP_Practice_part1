#include "Zombie.hpp"

int main()
{
    Zombie  *horde;
    horde = zombieHorde(10, "randomchump");

    delete[]horde;
}