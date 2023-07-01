#include "Character.hpp"
#include <iostream>
Character::Character(int health, int speed,
                     int strength, int magic,
                     std::string name) :
    health(health), speed(speed),
    strength(strength), magic(magic), name(name) {}
void Character::displayInfo() const {
    std::cout << "Name: " << name << std::endl;
    std::cout << "HP: " << health << std::endl;
    std::cout << "Speed: " << speed << std::endl;
    std::cout << "Strength: " << strength << std::endl;
    std::cout << "Magic: " << magic << std::endl;
    std::cout << "Inventory: " << std::endl;
    inventory.displayInventory();
    std::cout << std::endl;
}
void Character::receiveDamage(int damage) {
    health -= damage;
    if (health < 0) {
        health = 0;
    }
}
bool Character::isAlive() const {
    return health > 0;
}
std::string Character::getName() const {
    return name;
}
void Character::collect(Item* item_ptr) {
    std::cout << name << " collected "
        << item_ptr->getName() << std::endl;
    inventory.addItem(item_ptr);
}