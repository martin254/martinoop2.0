#ifndef RECTANGLE_H
#define RECTANGLE_H
//Preprocessor commands
#include "shape.h"

class Rectangle{
std::string shape;
int height, width;
public:
Rectangle(std::string shape="Rectangle"): shape(shape),
 height(0), width(0){}
 //Constructors
 Rectangle(int h, int w): height(h), width(w){}
 //Problem
 //Rectangle(std::string shape, int h, int w): height(h), width(w){}
 //My Solution
 Rectangle(std::string shape, int h, int w): shape(shape), height(h), width(w){}
 
 std::string getName();
 int area();
 
};
#endif
