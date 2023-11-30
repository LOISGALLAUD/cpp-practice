#ifndef INTERPOLATION1_H
#define INTERPOLATION1_H

#include"amoeba.h"
#include"nr3.h"

class Interpolation1:public Interpolation{

public:
	int interpol(const NRmatrix<double>& Image, double x, double y, int& OK)const;

};
