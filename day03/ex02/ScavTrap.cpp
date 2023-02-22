#include "ScavTrap.hpp"


ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap default constructor called" << std::endl;
    this->hit_points = 100;
    this->energy_points = 50;
    this->attack_damage = 20;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
    std::cout << "ScavTrap parameterized constructor called" << std::endl;
    // this->name = name;
    this->hit_points = 100;
    this->energy_points = 50;
    this->attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& obj)
{
    std::cout << "ScavTrap copy constructor called" << std::endl;
    *this = obj;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& obj)
{
    std::cout << "ScavTrap copy assignment operator called" << std::endl;
    this->attack_damage = obj.attack_damage;
    this->energy_points = obj.energy_points;
    this->hit_points = obj.hit_points;
    this->name = obj.name;
    return *this;
}

ScavTrap::~ScavTrap(){std::cout << "ScavTrap destructor called" << std::endl;}

void ScavTrap::attack(const std::string& target)
{
    if (this->energy_points <= 0 || this->hit_points <= 0)
        std::cout << "ScavTrap "<< this->name << " can't make a move" << std::endl;
    else
    {
        std::cout << "ScavTrap "<< this->name << " has attacked " << target << " for " << this->attack_damage << std::endl;
        this->energy_points--;
    }
    return;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}
