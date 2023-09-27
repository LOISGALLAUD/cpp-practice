/*
Loïs GALLAUD
https://github.com/LOISGALLAUD
*/

#include "../include/Golem.hpp"
#include "../include/Item.hpp"
#include "../include/Knight.hpp"
#include "../include/Weapon.hpp"
#include "../include/Wizard.hpp"

int main()
{
    Weapon *sword =
        new Weapon("Sword", 1, 10, 10); // name, rarity, price, damage
    // Weapon staff("Staff", 1, 10, 10);
    // Weapon rock("Rock", 1, 10, 10);

    Knight dornar("Dornar");
    Wizard magnus("Magnus");
    Golem gomata("Gomâta");

    dornar.collect(sword);
    // dornar.collect(sword);
    // dornar.equip(staff);
    // magnus.equip(rock);

    // dornar.attack(magnus);
    // magnus.attack(dornar);
    // gomata.attack(dornar);

    dornar.displayInfo();

    delete sword;

    dornar.displayInfo();
    return 0;
}
