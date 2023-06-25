/*
Ce programme utilise les struct ainsi que les references passées en paramètres
d'une fonction.
*/

#include <iostream>

using namespace std;

struct Personne {
    string nom;
    int age;
};

void presenter(Personne& p) {
    cout << "Bonjour " << p.nom << ", vous avez " << p.age << " ans." << endl;
}

int main() {
    Personne p;
    cout << "Quel est votre nom? ";
    cin >> p.nom;
    cout << "Quel est votre âge? ";
    cin >> p.age;
    presenter(p);
    return 0;
}
