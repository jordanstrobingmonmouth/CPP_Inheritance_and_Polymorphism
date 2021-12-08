#pragma once
#ifndef INHERITANCE_OBJECT_H
#define INHERITANCE_OBJECT_H
#include <string>
using namespace std;

class Object {
private:
    string name;
public:
    Object();
    Object(string name);
    string toString();
};

#endif //INHERITANCE_OBJECT_H
