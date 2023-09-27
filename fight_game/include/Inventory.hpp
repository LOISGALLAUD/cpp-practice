#ifndef INVENTORY_HPP
#define INVENTORY_HPP
#include <cstddef>
#include <iterator>
#define MAX_ITEMS 10
#define MAX_WEAPONS 3

#include "Item.hpp"
#include "Weapon.hpp"
// #include "Armor.hpp"
#include <iostream>
#include <string>
#include <vector>
class Inventory
{
  public:
    // Constructor & Destructor
    ~Inventory();
    Inventory() = default;

    // Getters
    std::vector<Item *> getItems() const { return items; }
    Item *getItem(int index) const { return items[index]; }
    size_t getMaxItems() const { return max_items; }
    size_t getMaxWeapons() const { return max_weapons; }

    // Setters
    void setItems(std::vector<Item *> items) { this->items = items; }
    void setItem(int index, Item *item_ptr) { items[index] = item_ptr; }

    // Deleters
    void deleteItem(int index) { items.erase(items.begin() + index); }

    // Methods
    void display() const;
    void addItem(Item *item_ptr);

    // Booleans
    bool isFull() const { return items.size() == max_items; }
    bool isEmpty() const { return items.size() == 0; }

  private:
    size_t max_items = MAX_ITEMS;
    size_t max_weapons = MAX_WEAPONS;
    std::vector<Item *> items;
    std::vector<Weapon *> weapons;
};
#endif
