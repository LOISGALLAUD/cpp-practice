#include "../include/Mage.hpp"
#include <iostream>
Mage :: Mage(std::string nom): Personnage(80, 100, 5, 20, nom) {
    std::cout << "Création de " << nom << " de classe "
        << "Mage" << std::endl;
}
void Mage :: attaquer(Personnage& cible) {
    std::cout << nom << " attaque " << cible.getNom() << " avec sa magie!" << std::endl;
    cible.recevoirDegats(magie);
}