#include <iostream>

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP


class ClapTrap
{
    protected:
        std::string name;
        int hit_points;
        int energy_points;
        int attack_damage;
    public:
    //-----cannonical form;
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap& obj);
        ClapTrap& operator= (const ClapTrap& obj);
        ~ClapTrap();
    //-----member functions;
        virtual void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};


#endif