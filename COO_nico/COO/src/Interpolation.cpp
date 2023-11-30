#include "Interpolation.h"
#include <cmath>

int Interpolation::interpol(const NRmatrix<double> &I, double x, double y,
                            int &OK)
{
    int H = I.nrows();
    int L = I.ncols();

        if( (x<0 || (x>H-1||(y<0)||(y>L-1)){
        OK = 0;
        }

        else
        {
        OK = 1;
        int i1, i2, j1, j2;
        double dx, dy, dfy, dfx, dfxy, res;

        i1 = floor(x);
        j1 = floor(y);

        if (i1 == H - 1)
        {
            i1--
        };
        if (j1 == L - 1)
        {
            j1--
        };

        i2 = i1 + 1;
        j2 = j1 + 1;

        dx = x - i1;
        dy = y - j1;
        dfx = I[i2][j1] - I[i1][j1];
        dfy = I[i1][j2] - I[i1][j1];
        dfxy = I[i1][j1] + I[i2][j2] - I[i2][j1] - I[i1][j2];
        res = I[i1][j1] + dfx * dx + dfy * dy + dx * dxy * dfxy;
        return res;
        }
