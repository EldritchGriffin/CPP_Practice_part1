#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ScavTrap clap("jesus christ");
    ClapTrap scav("satan's pawn");

    scav.beRepaired(15);
    clap.attack("satan's pawn");
    scav.takeDamage(20);
    scav.beRepaired(5);
    scav.attack("jesus christ");
    clap.takeDamage(0);
    clap.attack("satan's pawn");
    scav.takeDamage(20);
    clap.beRepaired(10);
    scav.beRepaired(5);

    clap.guardGate();


    return 0;
}