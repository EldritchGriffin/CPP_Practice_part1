#include <iostream>
#include "ClapTrap.hpp"

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

class FragTrap: public ClapTrap
{
    public:
    //-----cannonical form;
        FragTrap();
        FragTrap(std::string name);
        FragTrap(const FragTrap& obj);
        FragTrap& operator= (const FragTrap& obj);
        ~FragTrap();
    //-----member functions;
        void attack(const std::string& target);  
        void highFivesGuys(void);

};


#endif