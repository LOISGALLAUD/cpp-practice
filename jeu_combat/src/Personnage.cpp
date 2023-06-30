#include "../include/Personnage.hpp"
#include <iostream>
Personnage::Personnage(int sante, int vitesse,
                       int force, int magie,
                       std::string nom) :
    sante(sante), vitesse(vitesse),
    force(force), magie(magie), nom(nom) {}

void Personnage::afficherInfos() const {
    std::cout << "Nom: " << nom << std::endl;
    std::cout << "PV: " << sante << std::endl;
    std::cout << "V: " << vitesse << std::endl;
    std::cout << "F: " << force << std::endl;
    std::cout << "MAG: " << magie << std::endl;
    std::cout << "Inventaire: " << std::endl;
    inventaire.afficherInventaire();
    std::cout << "--------------------------" << std::endl;
}
void Personnage::recevoirDegats(int degats) {
    sante -= degats;
    if (sante < 0) {
        sante = 0;
    }
}
void Personnage::utiliserPotionDeVie(int quantitePotion) {
    sante += quantitePotion;
}
bool Personnage::estVivant() const {
    return sante > 0;
}
std::string Personnage::getNom() const {
    return nom;
}
void Personnage::prendre(std::string objet) {
    inventaire.ajouterObjet(objet);
}