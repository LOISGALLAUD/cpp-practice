/*
Ce programme utilise la syntaxe try/catch pour gérer les exceptions
*/

#include <iostream>
#include <vector>
#include <string>

int minimum(const std::vector<int>& valeurs) {
    if (valeurs.size() == 0)
        throw std::string("Pas de minimum pour un vecteur vide!");

    int mini = valeurs[0];
    for (auto e : valeurs) {
        if (e < mini)
            mini = e;
    }
    return mini;
}

int main() {
    std::vector<int> vals = { 4, 5, 3, 9, -1, 2 };
    try {
        std::cout << minimum(vals) << std::endl;
    } catch (const std::string& chaine) {
        std::cerr << chaine << std::endl;
    }
    return 0;
}
