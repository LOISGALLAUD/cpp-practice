#include "Deformation.h"


 void Deformation::deformImage(NRmatrix<double> im                       , 
                    NRmatrix<double> resDeforme                          , 
                    NRmatrix<double> resMask                             ,  
                    VecDoub param                        		 , 
                    Interpolation interpo ) {
	
	
	Transformation trans;
	for(int i=0; i<im.nrows();i++){
		for(int j=0; j<im.ncols();j++){ 
			VecDoub s(2);
			s[0] = i;
			s[1] = j;
			trans.transfo(
			}
		}
	

}
                    
