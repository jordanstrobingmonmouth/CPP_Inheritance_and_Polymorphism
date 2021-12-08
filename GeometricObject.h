#pragma once
#ifndef INHERITANCE_GEOMETRICOBJECT_H
#define INHERITANCE_GEOMETRICOBJECT_H
#include <string>
using namespace std;

class GeometricObject {
private:
    string color;
    bool filled;
public:
    GeometricObject();
    GeometricObject(string color, bool filled);
    string getColor();
    bool isFilled();
    void setColor(string color);
    void setFilled(bool filled);
    virtual string toString();
    virtual double getArea() = 0;
    virtual double getPerimeter() = 0;

};


#endif //INHERITANCE_GEOMETRICOBJECT_H
