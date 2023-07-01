#ifndef WEAPON_HPP
#define WEAPON_HPP
#include "Item.hpp"
#include <string>
class Weapon : public Item {
    public:
        Weapon(std::string name, int damage, int price);
        void displayInfo() const;
        int getDamage() const;
        int getPrice() const;
    private:
        int damage;
        int price;
};
#endif