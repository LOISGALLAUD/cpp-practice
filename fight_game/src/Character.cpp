#include "../include/Character.hpp"
#include <iostream>

Character::Character(std::string name, int health, int strength)
    : name(name), health(health), strength(strength)
{
    this->displayInfo();
}

void Character::displayInfo() const
{
    std::cout << "Name: " << name << std::endl;
    std::cout << "HP: " << health << std::endl;
    std::cout << "Strength: " << strength << std::endl;
    std::cout << "Inventory: " << std::endl;
    inventory.displayInventory();
    std::cout << std::endl;
}

void Character::receiveDamage(int damage)
{
    health -= damage;
    if (this->isAlive())
        std::cout << name << " received " << damage << " damage." << std::endl;
    else
        std::cout << name << " died." << std::endl;
}

// void Character::collect(Item *item_ptr)
// {
//     std::cout << name << " collected " << item_ptr->getName() << std::endl;
//     inventory.addItem(item_ptr);
// }
// void Character::equip(Weapon &weapon)
// {
//     inventory.addWeapon(&weapon);
//     std::cout << name << " equipped " << weapon.getName() << std::endl;
// }
