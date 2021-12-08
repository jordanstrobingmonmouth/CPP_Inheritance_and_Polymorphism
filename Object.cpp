#include "Object.h";
#include <string>
using namespace std;


Object::Object() {

}

Object::Object(string name) {
    this->name = name;
}

string Object::toString() {
    return "Class name: " + name;
}