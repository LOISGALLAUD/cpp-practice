/*
Loïs GALLAUD
https://github.com/LOISGALLAUD
*/
#include "../include/Guerrier.hpp"
#include "../include/Mage.hpp"
#include "../include/Golem.hpp"
int main() {
    Guerrier* dornar = new Guerrier("Dornar");
    Mage* magnus = new Mage("Magnus");
    Golem* gomata = new Golem("Gomâta");

    dornar->prendre("Potion de vie");
    magnus->prendre("Potion de mana");

    dornar->attaquer(*magnus);
    magnus->attaquer(*dornar);
    gomata->attaquer(*dornar);

    dornar->afficherInfos();
    magnus->afficherInfos();
    gomata->afficherInfos();

    delete dornar;
    delete magnus;
    delete gomata;
    return 0;
}