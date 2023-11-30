#include "nr3.h"

template <class T> int NRmatrix<T>::interpolation(double x, double y, int &OK)
{
    int H = nrows();
    int L = ncols();

    if (x >= 0 && x < H && y >= 0 && y < L)
    {
        OK = 1;
        int i1, i2, j1, j2;
        double dx, dy, dfy, dfx, dfxy, res;

        i1 = floor(x);
        j1 = floor(y);

        if (i1 == H - 1)
        {
            i1--;
        }
        if (j1 == L - 1)
        {
            j1--;
        }

        i2 = i1 + 1;
        j2 = j1 + 1;

        dx = x - i1;
        dy = y - j1;
        dfx = (*this)[i2][j1] - (*this)[i1][j1];
        dfy = (*this)[i1][j2] - (*this)[i1][j1];
        dfxy = (*this)[i1][j1] + (*this)[i2][j2] - (*this)[i2][j1] -
               (*this)[i1][j2];
        res = (*this)[i1][j1] + dfx * dx + dfy * dy + dx * dy * dfxy;

        return res;
    }
    else
    {
        OK = 0;
        return 0; // Valeur par défaut pour les coordonnées hors de l'image
    }
}

template <class T>
NRmatrix<double> NRmatrix<T>::deformation(void transformation(VecDoub, float &,
                                                              float &),
                                          VecDoub param)
{
    int height = nrows();
    int width = ncols();

    NRmatrix<double> outputImage(height, width);

    for (int y = 0; y < height; ++y)
    {
        for (int x = 0; x < width; ++x)
        {
            // Transformation inverse pour obtenir les coordonnées dans l'image
            // originale
            double originalX = x;
            double originalY = y;
            // Appel de la fonction de transformation avec les paramètres donnés
            transformation(param, originalX, originalY);

            // Interpolation bilinéaire des valeurs dans l'image d'origine
            int OK = 0;
            double interpolatedValue = interpolation(originalX, originalY, OK);

            // Remplissage de la nouvelle image avec les valeurs interpolées
            outputImage[y][x] = interpolatedValue;
        }
    }

    return outputImage;
}
