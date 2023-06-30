#include "../include/Inventaire.hpp"
void Inventaire :: afficherInventaire() const {
    for (auto objet : objets) {
        std::cout << objet << std::endl;
    }
}
void Inventaire :: ajouterObjet(std::string objet) {
    objets.push_back(objet);
}