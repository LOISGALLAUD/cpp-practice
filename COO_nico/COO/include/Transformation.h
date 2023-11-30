#ifndef _TRANSFORMATION_H_
#define _TRANSFORMATION_H_

#include "nr3.h"

class Transformation
{

  public:
    void transfo(VecDoub &param, // param = tx, ty, teta//
                 double x, double y, double &xres, double &yres);
};

#endif
