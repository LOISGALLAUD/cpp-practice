/*
Loïs GALLAUD
https://github.com/LOISGALLAUD
*/
#include "../include/Golem.hpp"
#include "../include/Knight.hpp"
#include "../include/Weapon.hpp"
#include "../include/Wizard.hpp"
int main()
{
    Weapon sword("Sword", 1, 10, 10);
    Weapon staff("Staff", 1, 10, 10);
    Weapon rock("Rock", 1, 10, 10);

    Knight dornar("Dornar");
    Wizard magnus("Magnus");
    // Golem gomata("Gomâta");

    dornar.equip(sword);
    dornar.equip(staff);
    magnus.equip(rock);

    // dornar.attack(magnus);
    // magnus.attack(dornar);
    // gomata.attack(dornar);

    dornar.get_inventory().displayInventory();

    // dornar.displayInfo();
    // magnus.displayInfo();
    // gomata.displayInfo();

    magnus.get_inventory().displayInventory();

    dornar.attack(magnus);

    return 0;
}
