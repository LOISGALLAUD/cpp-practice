#ifndef WEAPON_HPP
#define WEAPON_HPP
#include "Item.hpp"
#include <string>
class Weapon : public Item
{
  public:
    ~Weapon();
    Weapon(std::string name, size_t rarity, int price, int damage);
    void displayInfo() override;
    int getDamage() const;
    int getPrice() const;

  private:
    int damage;
};
#endif
