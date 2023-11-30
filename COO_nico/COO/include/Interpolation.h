#ifndef INTERPOLATION_H
#define INTERPOLATION_H

#include"nr3.h"

class Interpolation{

public:

	virtual int interpol(const NRmatrix<double>& Image, double x, double y, int& OK) const;
	

};
