#include "Rectangle.h"
#include "GeometricObject.h"
#include "Circle.h"
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

GeometricObject * largerArea(GeometricObject* ob1, GeometricObject* ob2) {
    if (ob1->getArea() > ob2->getArea()) return ob1;
    else return ob2;
}
int main() {
    Circle c("Circle");
    GeometricObject * o = &c;
    cout << c.toString() << endl << endl;
    cout << o->toString() << endl << endl;
    Rectangle r(6,8);
    o = &r;
    cout << o->toString() << endl << endl;
    GeometricObject & go = r;
    cout << go.toString() << endl << endl;

    GeometricObject * result = largerArea(&r, &c);
    cout << result->toString() << endl << endl;
    Circle * round = dynamic_cast<Circle*> (result);
    if (round != NULL) {
        cout << "Radius of circle: "  << round->getRadius() << endl << endl;
    }
    Rectangle * solid = dynamic_cast<Rectangle*> (result);
    if (solid != NULL) {
        cout << "Width of Rectangle: "  << solid->getWidth() << endl;
        cout << "Height of Rectangle: "  << solid->getHeight() << endl << endl;
    }
    return 0;
}
