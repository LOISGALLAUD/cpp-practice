#include "nr3.h"
#include <cmath>
#include <iostream>
#include "Transformation.h"

using namespace std; 

void Transformation::transfo(VecDoub& param, //param = tx, ty, teta//
                  double x     ,
                  double y     , 
                  double &xres , 
                  double &yres) {
 
 	xres = x*cos(param[2]) - y*sin(param[2]) + param[0] ;
 	yres = x*cos(param[2]) + y*sin(param[2]) + param[1] ;
 	
	               
}
