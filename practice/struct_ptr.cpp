/*
Ce programme rappelle comment passer des arguments
à une fonction avec des pointeurs.
*/

#include <iostream>
#include <string>

using namespace std;

struct Personne {
    string nom;
    int age;
};

void presenter(Personne* p) {
    cout << "Bonjour " << p->nom << ", vous avez " << p->age << " ans." << endl;
}

int main() {
    Personne p;
    cout << "Quel est votre nom? ";
    cin >> p.nom;
    cout << "Quel est votre âge? ";
    cin >> p.age;
    presenter(&p); // On passe l'adresse de p à la fonction presenter
    return 0;
}