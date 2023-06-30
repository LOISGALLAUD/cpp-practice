#include "../include/Golem.hpp"
#include <iostream>
Golem :: Golem(std::string nom): Personnage(200, 100, 10, 0, nom) {
    std::cout << "Création de " << nom << " de classe "
        << "Golem" << std::endl;
}
void Golem :: attaquer(Personnage& cible) {
    std::cout << nom << " attaque " << cible.getNom()
        << " avec son poing!" << std::endl;
    cible.recevoirDegats(force);
}