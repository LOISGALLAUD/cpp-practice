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
    Weapon sword("Sword", 10, 100);
    Weapon staff("Staff", 20, 200);
    Weapon rock("Rock", 5, 0);

    Knight dornar("Dornar");
    Wizard magnus("Magnus");
    Golem gomata("Gomâta");

    dornar.equip(&sword);
    magnus.collect(&staff);
    magnus.collect(&rock);

    dornar.attack(magnus);
    magnus.attack(dornar);
    gomata.attack(dornar);

    dornar.displayInfo();
    magnus.displayInfo();
    gomata.displayInfo();

    return 0;
}
