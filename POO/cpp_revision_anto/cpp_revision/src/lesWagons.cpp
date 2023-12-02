#include "../include/Motrice.h"
#include <iostream>

// Fonction de test
void maFonction1(Wagon obj)
{ // entrée du bloc ++W (copie):20

    // Fais appelle on constructeur de
    // recopie dans le bloc et fais appelle à la méthode afficher de
    //  wagon et pas de motrice !

    obj.afficher(); // Wagon::afficher()

} // Sortie du bloc --W :20

// Fonction de test

void maFonction2(Wagon *ptrW)
{ // Pas de recopie
    // on passe un pointeur sur un objet en argument !
    // donc pas besoin de recopie

    ptrW->afficher(); // Motrice::afficher()

} // pas de destruction

// Fonction de test pareil que maFonction2 pour les mm raisons
void maFonction3(Wagon &ptrW)
{
    ptrW.afficher(); // Motrice::afficher()
}

// Fonction principale
int main(void)
{
    Motrice M1(20, 500); // Wagon::Wagon
    // Motrice::Motrice

    std::cout << "----" << std::endl;

    maFonction1(M1);
    std::cout << "----" << std::endl;

    maFonction2(&M1);
    std::cout << "----" << std::endl;

    maFonction3(M1);
    std::cout << "----" << std::endl;

    return 0;
} // Attention, en sortie de main() il y a destruction !
  //--M :500
  //--W :20
