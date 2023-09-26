#ifndef INVENTORY_HPP
#define INVENTORY_HPP
#include "Item.hpp"
#include "Weapon.hpp"
// #include "Armor.hpp"
#include <iostream>
#include <string>
#include <vector>
class Inventory
{
  public:
    ~Inventory();
    Inventory() = default;
    void displayInventory() const;
    // void addItem(Item *item_ptr);
    void addWeapon(Weapon *weapon);

  private:
    // std::vector<Item *> items;
    std::vector<Weapon *> weapons;
    //    std::vector<Armor *> armors;
};
#endif
