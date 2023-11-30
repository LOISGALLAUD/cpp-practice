#include "MyApp.h"


int main(){
    VecDoub parameter[3]; //tableau qui à terme contiendra [Tx,Ty,theta]
    MyApp recalageImage("reference.pgm", "floating.pgm");

    if ((recalageImage.refToMatrix()) && (recalageImage.toMatrix())){  //met les fichiers .pgm sous format de matrice
        parameter = recalageImage.process();
    }

    cout << "Tx = " << parameter[0] << endl ;
    cout << "Ty = " << parameter[1] << endl ;
    cout << "Theta = " << parameter[2] << endl ;

    return 0;
}