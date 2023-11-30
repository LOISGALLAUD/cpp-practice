// Contenu du fichier Motrice.h
#include <iostream>
#include "Wagon.h"

class Motrice : public Wagon {
private:
    unsigned int pdsTract;

public:
    // Constructeur
    Motrice(unsigned int dataW, unsigned int dataM) : Wagon(dataW) {
        pdsTract = dataM;
        std::cout << "++M :" << obtenirPdsTract() << std::endl;
    }

    // Constructeur de copie
    Motrice(const Motrice& M) : Wagon(M) {
        pdsTract = M.pdsTract;
        std::cout << "+tM (copie):" << obtenirPdsTract() << std::endl;
    }

    // Destructeur
    ~Motrice(void) {
        std::cout << "--M :" << obtenirPdsTract() << std::endl;
    }

    // Méthode redéfinie
    virtual void afficher(void) const {
        Wagon::afficher();
        std::cout << "-> Poids tractable = " << obtenirPdsTract() << std::endl;
    }

    // Méthode redéfinie
    virtual unsigned int obtenirPdsTract(void) const {
        return pdsTract;
    }
};