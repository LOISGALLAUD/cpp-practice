#include "../include/Inventory.hpp"

Inventory::~Inventory()
{
    for (auto item_ptr : items)
    {
        delete item_ptr;
    }
    items.clear();
}

void Inventory::deleteItem(int index)
{
    delete items[index];
    items.erase(items.begin() + index);
}

void Inventory::deleteWeapon()
{
    delete weapons[0];
    weapons.clear();
}

void Inventory::display() const
{
    displayItems();
    displayWeapons();
}
