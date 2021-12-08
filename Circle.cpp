#include "Circle.h"
#include "Object.h"
#include <string>
using namespace std;

Circle::Circle(string name) :
GeometricObject(), Object(name){
    this->radius = 1.0;
}
Circle::Circle(string name, double radius) :
GeometricObject(), Object(name) {
    this->radius = radius;
}
Circle::Circle(string name, double radius, string color, bool filled) :
GeometricObject(color, filled), Object(name) {
    this->radius = radius;
}
double Circle::getRadius() {
    return this->radius;
}
void Circle::setRadius(double radius) {
    this->radius = radius;
}
double Circle::getArea() {
    return 3.14 * radius * radius;
}
double Circle::getPerimeter() {
    return 2 * 3.14 * radius;
}
double Circle::getDiameter() {
    return 2 * radius;
}
string Circle::toString() {
    string str = Object::toString() + "\n" + GeometricObject::toString();
    return str + "\nRadius: " + to_string(getRadius())
    + "\nArea: " + to_string(getArea()) +
    + "\nPerimeter: " + to_string(getPerimeter())
    + "\nDiameter: " + to_string(getDiameter());
}