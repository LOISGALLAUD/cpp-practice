#include "../include/Inventory.hpp"
#define MAX_ITEMS 10
#define MAX_WEAPONS 2

Inventory::~Inventory()
{
    for (int i = 0; i < MAX_ITEMS; i++)
    {
        delete items[i];
    }
    delete[] items;
    for (int i = 0; i < 2; i++)
    {
        delete weapons[i];
    }
    delete[] weapons;
}

void Inventory::displayInventory() const
{
    // Display items
    for (int i = 0; i < MAX_ITEMS; i++)
    {
        if (items[i] != nullptr)
        {
            std::cout << items[i]->getName() << std::endl;
        }
    }
    // Display weapons
    for (int i = 0; i < 2; i++)
    {
        if (weapons[i] != nullptr)
        {
            std::cout << weapons[i]->getName() << std::endl;
        }
    }
}

void Inventory::addItem(Item *item_ptr)
{
    for (int i = 0; i < MAX_ITEMS; i++)
    {
        if (items[i] == nullptr)
        {
            items[i] = item_ptr;
            return;
        }
    }
    std::cout << "Inventory is full" << std::endl;
}

void Inventory::equipWeapon(Weapon *weapon_ptr)
{
    for (int i = 0; i < MAX_WEAPONS; i++)
    {
        if (weapons[i] == nullptr)
        {
            weapons[i] = weapon_ptr;
            return;
        }
    }
    std::cout << "No more space for weapons" << std::endl;
}
