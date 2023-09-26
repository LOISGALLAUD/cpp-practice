#include "../include/Inventory.hpp"
#define MAX_ITEMS 10
#define MAX_WEAPONS 2

Inventory::~Inventory()
{
    std::cout << "Inventory destructor called" << std::endl;
}

void Inventory::displayInventory() const
{
    // Display items
    // std::cout << "Items: " << std::endl;
    // for (int i = 0; i < items.size(); i++)
    // {
    //     std::cout << items[i]->getName() << std::endl;
    // }
    // Display weapons
    std::cout << "Weapons: " << std::endl;

    for (std::vector<Weapon *>::size_type i = 0; i < weapons.size(); i++)
    {
        std::cout << weapons[i]->getName() << std::endl;
    }
}

// void Inventory::addItem(Item *item_ptr)
// {
//     items.push_back(item_ptr);
//     std::cout << "Inventory is full" << std::endl;
// }

void Inventory::addWeapon(Weapon *weapon_addr)
{
    if (weapons.size() < MAX_WEAPONS)
    {
        weapons.push_back(weapon_addr);
    }
    else
    {
        std::cout << "Inventory is full" << std::endl;
    }
}
