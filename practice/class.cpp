/*
Ce programme permet de tester le principe de classe en C++.
*/

#include <iostream>

class Rectangle {
    private: // Les attributs et méthodes publics sont accessibles depuis l'extérieur de la classe
        double longueur;
        double hauteur;

    public: // Les attributs et méthodes privés ne sont accessibles que depuis l'intérieur de la classe
        Rectangle(double longueur, double hauteur) { // Déclaration du constructeur
            std::cout << "Construction d'un rectangle" << std::endl;
            this->longueur = longueur;
            this->hauteur = hauteur;
        }
        double get_surface(void) {
            return longueur*hauteur; // Déclaration de la méthode
        }
        double get_perimetre(void) {
            return 2*(longueur+hauteur);
        }
        void set_dimensions(double longueur, double hauteur) {
            this->longueur = longueur;
            this->hauteur = hauteur;
        }
};

int main(void) {
    Rectangle* r = new Rectangle(10, 5); // Instanciation de la classe
    std::cout << "Surface du rectangle : " << r->get_surface() << std::endl;
    delete r;
    return 0;
}