#ifndef ENSEMBLE_HPP
#define ENSEMBLE_HPP

#include <iostream>

class Ensemble
{
  public:
    Ensemble();
    ~Ensemble();
    void ajouter(int);
    void retirer(int);
    bool appartient(int);
    int cardinal();
    bool estVide();
    bool estInclus(Ensemble &);
    bool estEgal(Ensemble &);
    Ensemble reunion(Ensemble &);
    Ensemble intersection(Ensemble &);
    Ensemble difference(Ensemble &);
    void afficher();

  private:
    int *elements;
    int nbElements;
};

#endif // !
