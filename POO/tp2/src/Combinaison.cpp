#include "../include/Combinaison.h"
#include <fstream>
#include <iostream>
using namespace std;

Combinaison::Combinaison()
{
    rapport = 0;
    elts = NULL;
    nbElts = 0;
}

Combinaison::Combinaison(const int *tab, unsigned int N, unsigned int val)
{
    rapport = 0;
    elts = NULL;
    nbElts = 0;
    modifierElts(tab, N);
    modifierRapport(val);
}

Combinaison::Combinaison(const Combinaison &ref)
{
    rapport = ref.rapport;
    nbElts = ref.nbElts;
    if (nbElts != 0)
    {
        elts = new int[nbElts];
        for (unsigned int i = 0; i < nbElts; i++)
            elts[i] = ref.elts[i];
    }
    else
        elts = NULL;
}

Combinaison::~Combinaison()
{
    if (elts != NULL)
    {
        delete[] elts;
        elts = NULL;
    }
}

Combinaison &Combinaison::operator=(const Combinaison &ref)
{
    if (this != &ref)
    {
        if (elts != NULL)
        {
            delete[] elts;
            elts = NULL;
        }

        rapport = ref.rapport;
        nbElts = ref.nbElts;
        if (nbElts != 0)
        {
            elts = new int[nbElts];
            for (unsigned int i = 0; i < nbElts; i++)
                elts[i] = ref.elts[i];
        }
    }
    return *this;
}

void Combinaison::modifierElts(const int *tab, unsigned int N)
{
    if (elts != NULL)
    {
        delete[] elts;
        elts = NULL;
    }

    nbElts = N;
    if (nbElts != 0)
    {
        elts = new int[nbElts];
        for (unsigned int i = 0; i < nbElts; i++)
            elts[i] = tab[i];
    }
}

const int *Combinaison::lireElts(unsigned int &N) const
{
    N = nbElts;
    return elts;
}

void Combinaison::modifierRapport(unsigned int N) { rapport = N; }

unsigned int Combinaison::lireRapport() const { return rapport; }
