#include "GeometricObject.h"
#include <string>
using namespace std;

GeometricObject::GeometricObject() {
    color = "White";
    filled = false;
}
GeometricObject::GeometricObject(string color, bool filled) {
    this->color = color;
    this->filled = filled;
}
string GeometricObject::getColor() {
    return this->color;
}
bool GeometricObject::isFilled() {
    return this->filled;
}
void GeometricObject::setColor(string color) {
    this->color = color;
}
void GeometricObject::setFilled(bool filled) {
    this->filled = filled;
}
string GeometricObject::toString() {
    return "Object color: " + color + "\n" + "Filled? " + (filled? "True":"False");
}