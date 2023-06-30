#ifndef INVENTAIRE_HPP
#define INVENTAIRE_HPP
#include <vector>
#include <string>
#include <iostream>
class Inventaire {
    public:
        ~Inventaire() = default;
        Inventaire() = default;
        void afficherInventaire() const;
        void ajouterObjet(std::string objet);
    private:
        std::vector<std::string> objets;
};
#endif