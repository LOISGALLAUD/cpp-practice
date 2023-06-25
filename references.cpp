/*
Ce programme montre l'utilisation des références.
*/

#include <iostream>

using namespace std;

int main() {
    int age = 19;
    int& ref = age; // ref est une référence vers age
    cout << "J'ai " << age << " ans." << endl;
    cout << "Adresse mémoire de la variable \"age\" : " << &age << endl;
    cout << "Adresse mémoire de la variable \"ref\" : " << &ref << endl;
    return 0;
}

/*
Les références sont des variables qui ne peuvent pas être modifiées.
Elles sont utiles pour passer des paramètres à des fonctions sans
copier la valeur de la variable.
*/