#ifndef _MYAPP_H_
#define _MYAPP_H_
#include "amoeba.h"
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

class MyApp
{
private:
    string& imageRef; 
    string& image;
    NRmatrix<double> ImRef ;
    NRmatrix<double> Im ;

public:
    MyApp(const string& imageRef_file, const string& image_file);
    bool refToMatrix();  //transforme le fichiers ref .pgm en matrice
    bool toMatrix() ;  //transforme le fichiers a recaler .pgm en matrice
    VecDoub process() ; //renvoie les paramètres tx, ty et theta en utilisant tout le processus d'optimisation
};

#endif
