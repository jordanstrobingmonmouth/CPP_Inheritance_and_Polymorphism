#pragma once
#ifndef INHERITANCE_RECTANGLE_H
#define INHERITANCE_RECTANGLE_H
#include "GeometricObject.h"
#include <string>
using namespace std;

class Rectangle : public GeometricObject {
private:
    double width;
    double height;
public:
    Rectangle();
    Rectangle(double width, double height);
    Rectangle(double width, double height, string color, bool filled);
    double getWidth();
    double getHeight();
    double getArea();
    double getPerimeter();
    void setWidth(double width);
    void setHeight(double height);
    string toString();
};

#endif //INHERITANCE_RECTANGLE_H
