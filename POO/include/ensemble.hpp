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
    bool appartient(int) const;
    int cardinal() const;
    bool estVide() const;
    bool estInclus(Ensemble &) const;
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
