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
        new Weapon("Sword", 1, 10, 50); // name, rarity, price, damage

    Knight dornar("Dornar");

    delete sword;
    return 0;
}
