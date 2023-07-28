/*
Ce programme demande à l'utilisateur son nom et son âge, puis
lui dit bonjour.
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    string nom;
    int age;
    cout << "Quel est votre nom? ";
    cin >> nom;
    cout << "Quel est votre âge? ";
    cin >> age;
    cout << "Bonjour " << nom << ", vous avez " << age << " ans." << endl;
    return 0;
}
