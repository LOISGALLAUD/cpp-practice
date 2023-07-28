/*
Ce programme vise à démontrer les différents types de variables
et leur utilisation.
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    // Déclaration de variables
    int age(19); // Syntaxe alternative
    string nom = "Loïs";
    double taille(1.75); // Syntaxe alternative
    bool estBeau = false;
    char lettre = 'a';

    /*
    La syntaxe alternative est préférable car elle permet
    d'éviter des erreurs de type. Elle rappelle aussi la
    syntaxe des constructeurs.
    */

    // Affichage de variables
    cout << "Je suis le " << nom << " du plaisir!" << endl;
    cout << "J'ai " << age << " ans." << endl;
    cout << "Je mesure " << taille << " mètre." << endl;
    cout << "Je suis " << (estBeau ? "beau" : "moche") << "." << endl;
    cout << "Ma lettre préférée est " << lettre << "." << endl;
    return 0;
}
