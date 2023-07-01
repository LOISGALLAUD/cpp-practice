#include "Weapon.hpp"
#include "Item.hpp"
#include <iostream>
#include <string>
Weapon::Weapon(std::string name, int damage, int price):
    Item(name), damage(damage), price(price) {
    std::cout << "Weapon " << name << " created" << std::endl;
}
void Item::displayInfo() const {
    std::cout << "Weapon: " << name << std::endl;
    std::cout << "Damage: " << damage << std::endl;
    std::cout << "Price: " << price << std::endl;
    std::cout << std::endl;
}
int Weapon::getDamage() const {
    return damage;
}
int Weapon::getPrice() const {
    return price;
}
