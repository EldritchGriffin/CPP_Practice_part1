#include "FragTrap.hpp"


FragTrap::FragTrap()
{
    std::cout << "FragTrap default constructor called" << std::endl;
    this->hit_points = 100;
    this->energy_points = 50;
    this->attack_damage = 20;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
    std::cout << "FragTrap parameterized constructor called" << std::endl;
    // this->name = name;
    this->hit_points = 100;
    this->energy_points = 50;
    this->attack_damage = 20;
}

FragTrap::FragTrap(const FragTrap& obj)
{
    std::cout << "FragTrap copy constructor called" << std::endl;
    *this = obj;
}

FragTrap& FragTrap::operator=(const FragTrap& obj)
{
    std::cout << "FragTrap copy assignment operator called" << std::endl;
    this->attack_damage = obj.attack_damage;
    this->energy_points = obj.energy_points;
    this->hit_points = obj.hit_points;
    this->name = obj.name;
    return *this;
}

FragTrap::~FragTrap(){std::cout << "FragTrap destructor called" << std::endl;}

void FragTrap::attack(const std::string& target)
{
    if (this->energy_points <= 0 || this->hit_points <= 0)
        std::cout << "FragTrap "<< this->name << " can't make a move" << std::endl;
    else
    {
        std::cout << "FragTrap "<< this->name << " has attacked " << target << " for " << this->attack_damage << std::endl;
        this->energy_points--;
    }
    return;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "Come on let's high five" << std::endl;
}

