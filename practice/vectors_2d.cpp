/*
Ce programme montre comment utiliser les vectors 2D en C++
*/

#include <vector>
#include <iostream>

int main() {
    std::vector<std::vector<int> > mon_vecteur;
    std::vector<int> ligne1;
    ligne1.push_back(4);
    ligne1.push_back(2);
    ligne1.push_back(5);
    mon_vecteur.push_back(ligne1);

    std::vector<int> ligne2;
    ligne2.push_back(1);
    ligne2.push_back(0);
    ligne2.push_back(3);
    mon_vecteur.push_back(ligne2);

    // Pour parcourir un vector on peut utiliser les iterators ou les index
    for(std::size_t i=0; i<mon_vecteur.size(); ++i) {
        for(std::size_t j=0; j<mon_vecteur[i].size(); ++j) {
            std::cout << mon_vecteur[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}