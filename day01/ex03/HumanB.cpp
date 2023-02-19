#include "HumanB.hpp"


HumanB::HumanB(std::string name)
{
    this->name = name;
    std::cout << this->name << " constructor called" << std::endl;
}

void HumanB::attack()
{
    const std::string&  weapontype = this->weapon->getType();

    if(weapontype.empty())
    {
        std::cout << this->name << " Has no weapon" << std::endl;
        return ;
    }
    std::cout << this->name << " attacks with their " << weapontype << std::endl;
}

void    HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}

HumanB::~HumanB()
{
    std::cout << this->name << " deconstructor called" << std::endl;
}