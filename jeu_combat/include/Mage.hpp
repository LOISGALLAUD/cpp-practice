#ifndef MAGE_HEADER
#define MAGE_HEADER
#include "Personnage.hpp"
#include <string>
#include <iostream>
class Mage : public Personnage {
    public:
        Mage(std::string nom);
        void attaquer(Personnage& cible) override;
};
#endif