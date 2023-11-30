#include <iostream>

class Point {
private:
    double abs, ord;

public:
    // Constructeur
    Point(double x = 0, double y = 0) {
        abs = x;
        ord = y;
    }

    // Méthode
    void affiche() const {
        std::cout << abs << "," << ord << std::endl;
    }

    // Méthode
    void obtenirCoord(double& x, double& y) const {
        x = abs;
        y = ord;
    }

    // Méthode
    void translater(double x, double y) {
        abs += x;
        ord += y;
    }
};