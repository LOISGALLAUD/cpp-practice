/*
Loïs GALLAUD 2A Généraliste

Exemple d'utilisation pour l'algorithme d'optimisation
et de la classe NRmatrix (pour contenir des images)
*/

#include "amoeba.h"
#include "image.hpp"
#include <iostream>

#define EPSILON 1.0e-2

struct monFoncteur
{ // Foncteur pour l'optimisation
    // Fonction à minimiser: f(x,y) = x^2 + y^2
    Doub operator()(const VecDoub &u) const
    {
        return u[0] * u[0] + u[1] * u[1];
    }
};

//-----------------------------------------------------------

int main()
{
    monFoncteur m;       // Foncteur pour l'optimisation
    Amoeba opt(EPSILON); // Algorithme d'optimisation

    VecDoub ystart(2); // Vecteur de départ pour l'optimisation
    ystart[0] = 10;
    ystart[1] = 8;
    VecDoub yfinal1(2); // Vecteur final pour l'optimisation

    yfinal1 = opt.minimize(ystart, 2., m); // Optimisation
    std::cout << yfinal1[0] << " " << yfinal1[1] << " " << m(yfinal1)
              << std::endl;

    // Image de taille 2x3 initialisee avec la constante 10
    Image im(2, 3, 10);
    im.set(2, 3, 12);
    im.affiche();
    return 0;
}
