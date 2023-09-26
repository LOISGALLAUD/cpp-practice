#include "../include/Weapon.hpp"
#include "../include/Item.hpp"
#include <iostream>
#include <string>

Weapon::~Weapon() { std::cout << "Weapon destructor called" << std::endl; }
Weapon::Weapon(std::string name, size_t rarity, int price, int damage)
    : Item(name, rarity, price), damage(damage)
{
}
void Weapon::displayInfo()
{
    std::cout << "Weapon: " << name << std::endl;
    std::cout << "Rarity: " << rarity << std::endl;
    std::cout << "Price: " << price << std::endl;
    std::cout << "Damage: " << damage << std::endl;
    std::cout << std::endl;
}
int Weapon::getDamage() const { return damage; }
int Weapon::getPrice() const { return price; }
