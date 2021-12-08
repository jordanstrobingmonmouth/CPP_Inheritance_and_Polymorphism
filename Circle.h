#pragma once
#ifndef INHERITANCE_CIRCLE_H
#define INHERITANCE_CIRCLE_H
#include <string>
#include "GeometricObject.h"
#include "Object.h"
using namespace std;

class Circle:public GeometricObject, public Object{
private:
    double radius;
public:
    Circle(string name);
    Circle(string name, double radius);
    Circle(string name,double radius, string color, bool filled);
    double getRadius();
    void setRadius(double radius);
    double getArea();
    double getPerimeter();
    double getDiameter();
    string toString();
};
#endif //INHERITANCE_CIRCLE_H
