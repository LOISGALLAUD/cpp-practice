#ifndef _DEFORMATION_H_
#define _DEFORMATION_H_
#include "nr3.h"
#include "Interpolation.h"
#include "Transformation.h"

class Deformation
{
    private : 
        Transformation transfo ;
    public:
        Deformation(Transformation t);

        void deformImage(NRmatrix<double> im                             , 
                    NRmatrix<double> resDeforme                          , 
                    NRmatrix<double> resMask                             ,  
                    VecDoub param                         , 
                    Interpolation interpo )
};

#endif