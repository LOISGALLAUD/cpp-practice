#include "../include/Guerrier.hpp"
#include <iostream>

Guerrier::Guerrier(std::string nom): Personnage(100, 100, 15, 0, nom) {
    std::cout << "Création de " << nom << " de classe "
        << "Guerrier" << std::endl;
}
void Guerrier::attaquer(Personnage& cible) {
    std::cout << nom << " attaque " << cible.getNom()
    << " avec son épée!" << std::endl;
    cible.recevoirDegats(force);
}