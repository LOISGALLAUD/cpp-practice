#include "../include/Knight.hpp"
#include <iostream>
Knight::Knight(std::string name) : Character(name, 100, 100, 15, 0)
{
    std::cout << "Creating " << name << " of class Knight" << std::endl;
}
void Knight::attack(Character &target)
{
    std::cout << name << " attacks " << target.getName() << " with his sword!"
              << std::endl;
    target.receiveDamage(strength);
}
