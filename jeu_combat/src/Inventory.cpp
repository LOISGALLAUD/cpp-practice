#include "Inventory.hpp"
void Inventory::displayInventory() const {
    for (auto item : items) {
        std::cout << item->getName() << std::endl;
    }
}
Inventory::~Inventory() {
    for (auto item : items) {
        delete item;
    }
}
void Inventory::addItem(Item* item_ptr) {
    items.push_back(item_ptr);
}