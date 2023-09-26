#include "../include/Item.hpp"
#include <iostream>
#include <string>

Item::~Item() { std::cout << "Item destructor called" << std::endl; }
Item::Item(std::string name, size_t rarity, int price)
    : name(name), rarity(rarity), price(price)
{
}
std::string Item::getName() const { return name; }
