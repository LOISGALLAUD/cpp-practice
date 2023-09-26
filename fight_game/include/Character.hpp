#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "Inventory.hpp"
#include "Item.hpp"
#include <string>

class Character
{
  public:
    virtual ~Character();
    Character(std::string name, int health, int strength);
    virtual void attack(Character &target) = 0;
    void displayInfo() const;
    void receiveDamage(int damage);
    void collect(Item *item_ptr);
    void equip(Weapon &weapon_ptr);
    bool isAlive() const;
    std::string getName() const;
    Inventory get_inventory() const { return inventory; }

  protected:
    std::string name;
    int health = 100;
    int speed = 10;
    int strength = 10;
    int magic = 10;
    Inventory inventory;
};
#endif
