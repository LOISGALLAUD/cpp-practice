#ifndef SIMILARITE2_H
#define SIMILARITE2

#include "Similarité.h"

class Similarite2 : public Similarite{

      public:
            double similaire(const NRmatrix<double>& Im1, 
                        const NRmatrix<double>& Mask1, 
                        const NRmatrix<double>& Im2,
                        const NRmatrix<double>& Mask2);
                        // constructeur du critere de similarité 2
}
