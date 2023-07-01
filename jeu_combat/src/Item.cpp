#include "Item.hpp"
#include <string>
#include <iostream>
Item::Item(std::string name) : name(name) {
    std::cout << "Item " << name << " created" << std::endl;
}
std::string Item::getName() const {
    return name;
}