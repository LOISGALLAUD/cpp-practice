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
    void addItem(Item *item_ptr);
    void equipWeapon(Weapon *weapon_ptr);

  private:
    Item **items = new Item *[10];
    Weapon **weapons = new Weapon *[2];
    //    std::vector<Armor *> armors;
};
#endif
