#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include "Inventory.hpp"
#include "Item.hpp"
#include <string>
class Character
{
  public:
    virtual ~Character() = default;
    Character(std::string name, int health, int speed, int strength, int magic);
    virtual void attack(Character &target) = 0;
    void displayInfo() const;
    void receiveDamage(int damage);
    void collect(Item *item_ptr);
    void equip(Weapon *weapon_ptr);
    bool isAlive() const;
    std::string getName() const;

  protected:
    int health = 100;
    int speed = 10;
    int strength = 10;
    int magic = 10;
    std::string name;
    Inventory inventory;
};
#endif
