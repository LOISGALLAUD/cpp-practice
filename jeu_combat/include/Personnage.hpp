#ifndef PERSONNAGE_HPP
#define PERSONNAGE_HPP
#include "Inventaire.hpp"
#include <string>
class Personnage {
    public:
        virtual ~Personnage() = default;
        virtual void attaquer(Personnage& cible) = 0;
        virtual void afficherInfos() const;
        virtual void recevoirDegats(int degats);
        virtual void utiliserPotionDeVie(int quantitePotion);
        virtual bool estVivant() const;
        virtual void prendre(std::string objet);
        virtual std::string getNom() const;
    protected:
        int sante = 100;
        int vitesse = 10;
        int force = 10;
        int magie = 10;
        std::string nom;
        Inventaire inventaire;
        Personnage(int sante, int vitesse, int force, int magie, std::string nom);
};
#endif