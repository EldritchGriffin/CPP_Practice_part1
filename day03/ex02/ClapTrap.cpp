#include "ClapTrap.hpp"


ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap default constructor called" << std::endl;
    this->hit_points = 10;
    this->energy_points = 10;
    this->attack_damage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "ClapTrap parameterized constructor called" << std::endl;
    this->name = name;
    this->hit_points = 10;
    this->energy_points = 10;
    this->attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap& obj)
{
    std::cout << "ClapTrap copy constructor called" << std::endl;
    *this = obj;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& obj)
{
    std::cout << "ClapTrap copy assignment operator called" << std::endl;
    this->attack_damage = obj.attack_damage;
    this->energy_points = obj.energy_points;
    this->hit_points = obj.hit_points;
    this->name = obj.name;
    return *this;
}

ClapTrap::~ClapTrap(){std::cout << "ClapTrap destructor called" << std::endl;}

void ClapTrap::attack(const std::string& target)
{
    if (this->energy_points <= 0 || this->hit_points <= 0)
        std::cout << "ClapTrap "<< this->name << " can't make a move" << std::endl;
    else
    {
        std::cout << "ClapTrap "<< this->name << " has attacked " << target << " for " << this->attack_damage << std::endl;
        this->energy_points--;
    }
    return;
}
void ClapTrap::takeDamage(unsigned int amount)
{
     if (this->hit_points <= 0)
        std::cout << this->name << " has already fainted" << std::endl;
    else
    {
        std::cout << this->name << " has taken " << amount << " damage" << std::endl;
        this->hit_points -= amount;
    }
    return ;
}
void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->energy_points <= 0 || this->hit_points <= 0)
        std::cout << this->name << " can't make a move" << std::endl;
    else
    {
        this->hit_points += amount;
        std::cout <<this->name << " has repaired itself for " << amount << std::endl;
        this->energy_points--;
    }
    return;
}