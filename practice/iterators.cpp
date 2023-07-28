/*
Ce programme montre comment utiliser les iterators en C++
*/

#include <vector>
#include <iostream>

int main() {
    std::vector<std::string> mon_vecteur;
    mon_vecteur.push_back("Bonjour");
    mon_vecteur.push_back("tout");
    mon_vecteur.push_back("le");
    mon_vecteur.push_back("monde");

    // Pour parcourir un vector on peut utiliser les iterators ou les index
    for(std::vector<std::string>::iterator it=mon_vecteur.begin(); it!=mon_vecteur.end(); ++it) {
        std::cout << *it << " ";
    }

    std::cout << std::endl;
    return 0;
}