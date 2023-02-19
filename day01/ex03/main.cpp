#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

void    leakage()
{
    system("leaks violence");
}

int main()
{
    Weapon club = Weapon("crude spiked club");
    HumanA bob("Bob", club);
    bob.attack();
    club.setType("some other type of club");
    bob.attack();
}