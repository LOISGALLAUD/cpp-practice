// Contenu du fichier Wagon.h
#include <iostream>

class Wagon {
protected:
    unsigned int pds;

public:
    // Constructeur
    Wagon(unsigned int dataW) {
        pds = dataW;
        std::cout << "++W :" << obtenirPds() << std::endl;
    }

    // Constructeur de copie
    Wagon(const Wagon& W) {
        pds = W.pds;
        std::cout << "++W (copie):" << obtenirPds() << std::endl;
    }

    // Destructeur
    ~Wagon() {
        std::cout << "--W :" << obtenirPds() << std::endl;
    }

    // Méthode virtuelle
    virtual void afficher(void) const {
        std::cout << "-> Poids = " << obtenirPds() << std::endl;
    }

    // Méthode virtuelle
    virtual unsigned int obtenirPds(void) const {
        return pds;
    }

    // Méthode virtuelle
    virtual unsigned int obtenirPdsTract(void) const {
        return 0;
    }
};