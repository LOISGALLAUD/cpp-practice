#ifndef INVENTORY_HPP
#define INVENTORY_HPP
#include "Item.hpp"
#include <vector>
#include <string>
#include <iostream>
class Inventory {
    public:
        ~Inventory();
        Inventory() = default;
        void displayInventory() const;
        void addItem(Item* item_ptr);
    private:
        std::vector<Item*> items;
};
#endif