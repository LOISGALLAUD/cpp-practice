// #include "../include/ensemble.hpp"
#include "../include/Combinaison.h"
#include "../include/ensemblegen.hpp"

int main(void)
{
    // Ensemble e1;
    // e1.ajouter(1);
    // e1.ajouter(2);
    // e1.ajouter(3);
    // e1.ajouter(4);
    // e1.ajouter(5);
    // e1.afficher();
    // Ensemble e2;
    // e2.ajouter(3);
    // e2.ajouter(4);
    // e2.ajouter(5);
    // e2.ajouter(6);
    // e2.ajouter(7);
    // e2.afficher();
    // Ensemble e3 = e1.reunion(e2);
    // e3.afficher();
    // Ensemble e4 = e1.intersection(e2);
    // e4.afficher();
    // Ensemble e5 = e1.difference(e2);
    // e5.afficher();

    EnsembleGen<double> e1;
    e1.ajouter(1.654);
    e1.ajouter(2.6584132);
    e1.ajouter(3.8451);
    e1.ajouter(4.12345);
    EnsembleGen<double> e2;
    e2.ajouter(3.565);
    e2.ajouter(4.55223);
    e2.ajouter(5.6845);
    e1.afficher();
    e2.afficher();
    EnsembleGen<double> e3 = e1.reunion(e2);
    e3.afficher();
    EnsembleGen<double> e4 = e1.intersection(e2);
    e4.afficher();
    EnsembleGen<double> e5 = e1.difference(e2);
    e5.afficher();

    e1.sauvegarder("e1.txt");
    e2.sauvegarder("e2.txt");

    EnsembleGen<double> e6;
    e6.charger("e1.txt");
    e6.afficher();

    // EnsembleGen<Combinaison> e1;
    // e1.ajouter(Combinaison());
    // e1.ajouter(Combinaison());
    // e1.ajouter(Combinaison());
    // EnsembleGen<Combinaison> e2;
    // e2.ajouter(Combinaison());
    // e2.ajouter(Combinaison());
    // e2.ajouter(Combinaison());
    // e1.afficher();
    // e2.afficher();
    // EnsembleGen<Combinaison> e3 = e1.reunion(e2);
    // e3.afficher();
    // EnsembleGen<Combinaison> e4 = e1.intersection(e2);
    // e4.afficher();
    // EnsembleGen<Combinaison> e5 = e1.difference(e2);
    // e5.afficher();

    return 0;
}
