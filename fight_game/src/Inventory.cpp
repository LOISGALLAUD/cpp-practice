#include "../include/Inventory.hpp"

void Inventory::displayInventory() const
{
    std::cout << "Inventory:" << std::endl;
    for (auto item : items)
    {
        std::cout << item->getName() << std::endl;
    }
}

bool Inventory::addItem(Item *item_ptr)
{
    // Return true if item was added, false otherwise
    if (items.size() < max_items)
    {
        items.push_back(item_ptr);
        return true;
    }
    else
    {
        std::cout << "Inventory is full." << std::endl;
        return false;
    }
}
