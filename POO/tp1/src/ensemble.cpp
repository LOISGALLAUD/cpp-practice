#include "../include/ensemble.hpp"

Ensemble::Ensemble()
{
    elements = new int[0];
    nbElements = 0;
}

Ensemble::~Ensemble() { delete[] elements; }

void Ensemble::ajouter(int element)
{
    if (!appartient(element))
    {
        int *tmp = new int[nbElements + 1];
        for (int i = 0; i < nbElements; i++)
        {
            tmp[i] = elements[i];
        }
        tmp[nbElements] = element;
        delete[] elements;
        elements = tmp;
        nbElements++;
    }
}

void Ensemble::retirer(int element)
{
    if (appartient(element))
    {
        int *tmp = new int[nbElements - 1];
        int j = 0;
        for (int i = 0; i < nbElements; i++)
        {
            if (elements[i] != element)
            {
                tmp[j] = elements[i];
                j++;
            }
        }
        delete[] elements;
        elements = tmp;
        nbElements--;
    }
}

bool Ensemble::appartient(int element) const
{
    for (int i = 0; i < nbElements; i++)
    {
        if (elements[i] == element)
        {
            return true;
        }
    }
    return false;
}

int Ensemble::cardinal() const { return nbElements; }

bool Ensemble::estVide() const { return nbElements == 0; }

bool Ensemble::estInclus(Ensemble &ensemble) const
{
    for (int i = 0; i < nbElements; i++)
    {
        if (!ensemble.appartient(elements[i]))
        {
            return false;
        }
    }
    return true;
}

bool Ensemble::estEgal(Ensemble &ensemble)
{
    return estInclus(ensemble) && ensemble.estInclus(*this);
}

Ensemble Ensemble::reunion(Ensemble &ensemble)
{
    Ensemble tmp;
    for (int i = 0; i < nbElements; i++)
    {
        tmp.ajouter(elements[i]);
    }
    for (int i = 0; i < ensemble.nbElements; i++)
    {
        tmp.ajouter(ensemble.elements[i]);
    }
    return tmp;
}

Ensemble Ensemble::intersection(Ensemble &ensemble)
{
    Ensemble tmp;
    for (int i = 0; i < nbElements; i++)
    {
        if (ensemble.appartient(elements[i]))
        {
            tmp.ajouter(elements[i]);
        }
    }
    return tmp;
}

Ensemble Ensemble::difference(Ensemble &ensemble)
{
    Ensemble tmp;
    for (int i = 0; i < nbElements; i++)
    {
        if (!ensemble.appartient(elements[i]))
        {
            tmp.ajouter(elements[i]);
        }
    }
    return tmp;
}

void Ensemble::afficher()
{
    std::cout << "{";
    for (int i = 0; i < nbElements; i++)
    {
        std::cout << elements[i];
        // Placement de la virgule
        if (i < nbElements - 1)
        {
            std::cout << ", ";
        }
    }
    std::cout << "}" << std::endl;
}

int main(void)
{
    Ensemble e1;
    e1.ajouter(1);
    e1.ajouter(2);
    e1.ajouter(3);
    e1.ajouter(4);
    e1.ajouter(5);
    e1.afficher();
    Ensemble e2;
    e2.ajouter(3);
    e2.ajouter(4);
    e2.ajouter(5);
    e2.ajouter(6);
    e2.ajouter(7);
    e2.afficher();
    Ensemble e3 = e1.reunion(e2);
    e3.afficher();
    Ensemble e4 = e1.intersection(e2);
    e4.afficher();
    Ensemble e5 = e1.difference(e2);
    e5.afficher();
    return 0;
}
