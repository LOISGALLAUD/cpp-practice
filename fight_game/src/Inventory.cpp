#include "../include/Inventory.hpp"

Inventory::~Inventory()
{
    for (auto item_ptr : items)
    {
        delete item_ptr;
    }
    items.clear();
}

void Inventory::display() const
{
    for (auto item : items)
    {
        std::cout << "- " << item->getName() << std::endl;
    }
}

void Inventory::addItem(Item *item_ptr)
{
    if (items.size() < max_items)
    {
        // Create a new memory space for the item
        Item *item = new Item(*item_ptr);
        items.push_back(item);
    }
    else
    {
        std::cout << "Inventory is full." << std::endl;
    }
}
