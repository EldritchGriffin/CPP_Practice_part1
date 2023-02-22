#include <iostream>
#include "ClapTrap.hpp"

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

class ScavTrap: public ClapTrap
{
    public:
    //-----cannonical form;
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap& obj);
        ScavTrap& operator= (const ScavTrap& obj);
        ~ScavTrap();
    //-----member functions;
        void attack(const std::string& target);
        void guardGate();   

};


#endif