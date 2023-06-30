#ifndef GOLEM_HEADER
#define GOLEM_HEADER
#include "Personnage.hpp"
#include <string>
#include <iostream>
class Golem : public Personnage {
    public:
        Golem(std::string nom);
        void attaquer(Personnage& cible) override;
};
#endif