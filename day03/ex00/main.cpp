#include "ClapTrap.hpp"

int main()
{
    ClapTrap trapper("jesus christ");

    trapper.attack("The sinners");
    trapper.takeDamage(9);
    trapper.beRepaired(9);
    trapper.takeDamage(11);
    trapper.attack("The sinners");
    trapper.beRepaired(9);
    return 0;
}