#include "Character.hpp"

Character::Character() : name("default")
{
    for (int i = 0; i < 4; i++)
        inventory[i] = NULL;
}

Character::Character(std::string const & name) : name(name)
{
    for (int i = 0; i < 4; i++)
        inventory[i] = NULL;
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
        if (inventory[i])
            delete inventory[i];
}

Character::Character(const Character& obj)
{
    *this = obj;
}

Character& Character::operator= (const Character& obj)
{
    this->name = obj.name;
    for (int i = 0; i < 4; i++)
        if (obj.inventory[i])
            this->inventory[i] = obj.inventory[i]->clone();
    return *this;
}

std::string const & Character::getName() const
{
    return this->name;
}

void Character::equip(AMateria* m)
{
    for (int i = 0; i < 4; i++)
        if (!inventory[i])
        {
            inventory[i] = m;
            return ;
        }
}

void Character::unequip(int idx)
{
    if (idx < 0 || idx > 3)
        return ;
    if (inventory[idx])
        inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
    if (idx < 0 || idx > 3)
        return ;
    if (inventory[idx])
        inventory[idx]->use(target);
}

