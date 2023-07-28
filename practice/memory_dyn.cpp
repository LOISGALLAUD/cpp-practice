/*
Ce programme montre comment allouer de la mémoire dynamiquement
en C++.
*/

#include <iostream>

using namespace std;

int main() {
    int* age = new int;
    *age = 19;
    cout << "J'ai " << *age << " ans." << endl;
    cout << "Adresse mémoire de la variable \"*age\" : " << age << endl;
    cout << "Adresse mémoire du pointeur \"age\" : " << &age << endl;
    delete age;

    int *p = new int;
    int *tableau = new int[10]; // Tableau de 10 entiers

    delete p;
    delete[] tableau; // Pour libérer un tableau, il faut utiliser delete[]

    return 0;
}

/*
Explication:
    - La variable *age est un pointeur vers un entier.
    - L'opérateur new alloue de la mémoire dynamiquement.
    - L'opérateur * permet d'accéder à la valeur pointée.
    - L'opérateur delete libère la mémoire allouée.
*/