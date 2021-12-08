#include "Rectangle.h"
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;

Rectangle::Rectangle() : GeometricObject() {
    this->width = 1.0;
    this->height = 1.0;
}
Rectangle::Rectangle(double width, double height) : GeometricObject() {
    this->width = width;
    this->height = height;
}
Rectangle::Rectangle(double width, double height, string color, bool filled) : GeometricObject(color, filled) {
    this->width = width;
    this->height = height;
}
double Rectangle::getWidth() {
    return this->width;
}
double Rectangle::getHeight() {
    return this->height;
}
double Rectangle::getArea() {
    return this->height * this->width;
}
double Rectangle::getPerimeter() {
    return 2 * (this->height + this->width);
}
void Rectangle::setWidth(double width) {
    this->width = width;
}
void Rectangle::setHeight(double height) {
    this->height = height;
}
string Rectangle::toString() {
    stringstream ss;
    ss << fixed << setprecision(3);
    ss << height;
    string str = GeometricObject::toString() + "\n"
    + "Height: " + ss.str() + "\n"
    + "Width: " + to_string(getWidth()) + "\n"
    + "Area:" + to_string(getArea()) + "\n"
    + "Perimeter: " + to_string(getPerimeter());

    return str;
}
