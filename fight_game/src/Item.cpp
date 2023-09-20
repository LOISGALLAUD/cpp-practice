#include "../include/Item.hpp"
#include <iostream>
#include <string>
Item::Item(std::string name) : name(name)
{
    std::cout << "Item " << name << " created" << std::endl;
}
std::string Item::getName() const { return name; }
