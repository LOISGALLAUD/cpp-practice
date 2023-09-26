#include "../include/Inventory.hpp"

void Inventory::displayInventory() const
{
    std::cout << "Inventory:" << std::endl;
    for (auto item : items)
    {
        std::cout << item->getName() << std::endl;
    }
}

void Inventory::collect(Item *item_ptr)
{
    if (items.size() < max_items)
    {
        items.push_back(item_ptr);
    }
    else
    {
        std::cout << "Inventory is full!" << std::endl;
    }
}
