#ifndef SEGMENT_H
#define SEGMENT_H
#include "Point.h"
#include <iostream>
#include <cmath>

class Segment {

private :
    Point p1,p2; //p1(0,0) p2(0,0)

public :
    Segment(double x1, double y1, double x2, double y2){
        p1.translater(x1,y1);
        p2.translater(x2,y2);
    }
    Segment (Point A, Point B){
        double abs;
        double ord;
        A.obtenirCoord(abs,ord); //obtenirCoord passe par ref, donc abs et ord sont modifiées
// à la valeur des coord de A
        p1.translater(abs, ord); //on utilise translater sur des points de coord 0
        B.obtenirCoord(abs, ord);
        p2.translater(abs, ord);        
    }

    void affiche() {
        double abs1, ord1, abs2, ord2, l;
        p1.obtenirCoord(abs1, ord1);
        std::cout<< abs1 << "," << ord1 << std::endl;
        p2.obtenirCoord(abs2, ord2);
        std::cout<< abs2 << "," << ord2 << std::endl;
        l=sqrt(pow(abs(abs1-abs2),2)+pow(abs(ord1-ord2), 2));
        std::cout<<"Longueur :" << l << std::endl << std::endl; // double endl possible !!
    }

    void modifierPoint(Point p, int index){
        double abs1, ord1, abs2, ord2;
        p.obtenirCoord(abs1, ord1);

        if(index==1){
            p1.obtenirCoord(abs2, ord2);
            p1.translater(abs1-abs2,abs1-ord2);
        }else if(index==2){
            p2.obtenirCoord(abs2, ord2);
            p2.translater(abs1-abs2,abs1-ord2);
        }
    }
};

#endif