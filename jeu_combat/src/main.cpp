/*
Loïs GALLAUD
https://github.com/LOISGALLAUD
*/
#include "Knight.hpp"
#include "Wizard.hpp"
#include "Golem.hpp"
#include "Weapon.hpp"
int main() {
    Weapon* sword = new Weapon("Sword", 10, 100);
    Weapon* staff = new Weapon("Staff", 20, 200);
    Weapon* rock = new Weapon("Rock", 5, 0);

    Knight* dornar = new Knight("Dornar");
    Wizard* magnus = new Wizard("Magnus");
    Golem* gomata = new Golem("Gomâta");

    dornar->collect(sword);
    magnus->collect(staff);
    magnus->collect(rock);

    dornar->attack(*magnus);
    magnus->attack(*dornar);
    gomata->attack(*dornar);

    dornar->displayInfo();
    magnus->displayInfo();
    gomata->displayInfo();

    delete dornar;
    delete magnus;
    delete gomata;
    return 0;
}