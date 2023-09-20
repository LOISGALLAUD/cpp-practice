#include "../include/Golem.hpp"
#include <iostream>
Golem ::Golem(std::string name) : Character(name, 200, 100, 10, 0)
{
    std::cout << "Creating " << name << " of class Golem" << std::endl;
}
void Golem ::attack(Character &target)
{
    std::cout << name << " attacks " << target.getName() << " with its fists!"
              << std::endl;
    target.receiveDamage(strength);
}
