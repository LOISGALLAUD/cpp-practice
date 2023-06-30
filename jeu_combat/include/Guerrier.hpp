#ifndef HEADER_GUERRIER
#define HEADER_GUERRIER
#include "Personnage.hpp"
#include <string>
#include <iostream>
class Guerrier : public Personnage {
    public:
        Guerrier(std::string nom);
        void attaquer(Personnage& cible) override;
};
#endif