#pragma once
#include "nr3.h"
#include <iostream>

class Image
{
  private:
    NRmatrix<double> im;

  public:
    Image(int n, int m, int val) : im(n, m, val) {}
    int get(int i, int j) const { return im[i][j]; }
    void set(int i, int j, int val) { im[i][j] = val; }
    int interpolation(double x, double y) const;
    void affiche() const;
    void greyScale();
};
