#include "Wizard.hpp"
#include <iostream>
Wizard::Wizard(std::string name) : Character(80, 100, 5, 20, name) {
    std::cout << "Creating " << name << " of class Wizard" << std::endl;
}
void Wizard::attack(Character& target) {
    std::cout << name << " attacks " << target.getName()
        << " with his magic!" << std::endl;
    target.receiveDamage(magic);
}