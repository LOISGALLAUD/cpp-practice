#include "../include/Inventory.hpp"

void Inventory::displayInventory() const
{
    std::cout << "Inventory:" << std::endl;
    for (auto item : items)
    {
        std::cout << item->getName() << std::endl;
    }
}

void Inventory::addItem(Item *item_ptr)
{
    if (items.size() < max_items)
    {
        Item *item = item_ptr; // Copy the pointer
        items.push_back(item);
    }
    else
    {
        std::cout << "Inventory is full." << std::endl;
    }
}
