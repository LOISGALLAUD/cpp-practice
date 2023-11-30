#include "Segment.h"

int main(void) {
    Point A, B(3, 3); // A(0,0) cf constructeur de Point
                    // B(3,3)

    Segment S1(0, 1, 1, 4);
    Segment S2(A, B); 

    S1.affiche();
    S2.affiche();

    S2.modifierPoint(B, 1); // Modifie le point pl de S2
    S2.affiche();

    S2.modifierPoint(A, 2); // Modifie le point p2 de S2
    S2.affiche();

    return 0;
}