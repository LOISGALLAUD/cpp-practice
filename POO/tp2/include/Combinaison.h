#ifndef COMBINAISON_H
#define COMBINAISON_H

#include <iostream>
#include <fstream>

class Combinaison{
   private: 
        // Adresse du premier element du tableau dynamique contenant les symboles de la Combinaison
        int* elts;
        // Nombre de symboles de la Combinaison
        unsigned int nbElts;
        // Rapport de gain de la Combinaison
        unsigned int rapport;

   public:
        // Cree une combinaison vide
        Combinaison();
        // Cree une combinaison de N symboles (par copie des N elements du tableau tab) et de rapport val
        Combinaison(const int* tab,unsigned int N,unsigned int val);
        // Constructeur de recopie (cf. attribut elts)
        Combinaison(const Combinaison& ref);
        // Destructeur (cf. attribut elts)
        ~Combinaison();
        // Surcharge de l'operateur d'affectation (cf. attribut elts)
        Combinaison& operator=(const Combinaison& ref);

        // Modifie la combinaison courante par copie des N symboles du tableau tab
        void modifierElts(const int* tab,unsigned int N);
        // Retourne l'adresse du premier element du tableau dynamique contenant les symboles de la Combinaison, et copie dans N le nombre de symboles de la Combinaison
        const int* lireElts(unsigned int& N) const;
        // Copie N dans le rapport de gain de la Combinaison
        void modifierRapport(unsigned int N);
        // Retourne le rapport de gain de la Combinaison
        unsigned int lireRapport() const;
};


#endif
