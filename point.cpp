/*
Ce programme est un calcul de distance entre des points.
*/

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Point {
    public:
        Point(double x, double y) {
            this->x = x;
            this->y = y;
        }
        double get_x(void) const {
            return x;
        }
        double get_y(void) const {
            return y;
        }
        void set_x(double x) {
            this->x = x;

        }
        void set_y(double y) {
            this->y = y;
        };
        double distance_to(Point autrePoint) const {
            return sqrt(pow(autrePoint.get_x()-x, 2)+pow(autrePoint.get_y()-y, 2));
        }
        string repr() const {
        return "Point(x=" + to_string(x) + ", y=" + to_string(y) + ")";
    }
    private:
        double x;
        double y;
};

int main(void) {
    Point* p1 = new Point(0, 0);
    cout << "Point 1 : " << p1->repr() << endl;
    Point* p2 = new Point(1, 1);
    cout << "Point 2 : " << p2->repr() << endl;
    cout << "Distance entre les points : " << p1->distance_to(*p2) << endl;
    delete p1;
    delete p2;
    return 0;
}
