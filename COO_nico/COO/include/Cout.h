#ifndef COUT_H
#define COUT_H

#include"Deformation.h"
#include"Transformation.h"
#include"Similarite.h"
#include"Interpolation.h"
#include"amoeba.h"
#include"nr3.h"

class Cout{


public:

double fcout(NRmatrix<double>& I, NRmatrix<double>& Iref, double* param,Similarite sim,Interpolation interpole);


}




                    
                    //utilise la fonction allocImage pour creer 2 images de meme taille que I ou Iref
//utilise la fonction DeformImage 
//utilise la fonction ComputeSimilarity
//utilise la fonction desallocImage pour les deux images prealablement creees
