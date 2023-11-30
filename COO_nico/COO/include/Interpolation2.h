#ifndef INTERPOLATION2_H
#define INTERPOLATION2_H

#include"amoeba.h"
#include"nr3.h"

class Interpolation2:public Interpolation{

public:
	int interpol(const NRmatrix<double>& Image, double x, double y, int& OK)const;

};
