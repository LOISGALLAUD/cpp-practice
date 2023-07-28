/*
Exercice pour comprendre l'abstraction
en C++.
*/

#include <iostream>

class Forme {
    public:
        virtual ~Forme() = default;
        virtual void calculerSurface() = 0;
};

class Cercle : public Forme {
    public:
        void calculerSurface() override {
            std::cout << "Calcul de la surface du cercle: πr^2" << std::endl;
        }
};

class Rectangle : public Forme {
    public:
        void calculerSurface() override {
            std::cout << "Calcul de la surface du rectangle: l * L" << std::endl;
        }
};

int main() {
    Forme* forme = new Cercle();
    forme->calculerSurface();
    delete forme;
    return 0;
}
