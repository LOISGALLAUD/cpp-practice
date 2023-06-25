/*
Ce programme montre un exmeple d'utilisation
des listes en C++
*/

#include <list>
#include <iostream>

int main() {
    std::list<int> ma_liste;
    ma_liste.push_back(4);
    ma_liste.push_back(2);
    ma_liste.push_back(5);

    // Pour parcourir une liste on peut utiliser les iterators ou les index
    for(std::list<int>::iterator it=ma_liste.begin(); it!=ma_liste.end(); ++it) {
        std::cout << *it << " ";
    }

    std::cout << std::endl;
    return 0;
}