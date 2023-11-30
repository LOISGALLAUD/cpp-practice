#ifndef SIMILARITE_H
#define SIMILARITE_H

#include "nr3.h"

class Similarite{
      public:
            virtual double similaire(const NRmatrix<double>& Im1, 
                              const NRmatrix<double>& Mask1, 
                              const NRmatrix<double>& Im2,
                              const NRmatrix<double>& Mask2);
                              // constructeur du critere de similarité 1
}

#endif
