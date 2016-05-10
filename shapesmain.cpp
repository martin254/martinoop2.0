#include <iostream>
#include <string>
//User defined header files
#include "shape.h"
#include "rectangle.h"

using namespace std;

 class Triangle : public Rectangle{
 public:
 Triangle(int h, int b) : Rectangle("Triangle", h, b){}
 Triangle() : Rectangle("Triangle"){}
 int area();
 };
 int Triangle::area(){
 // return (int)(0.5 * height * width);
 return (int)(0.5 * Rectangle::area());
 }
 class Square : public Rectangle{
 public:
 Square(int side);
 };
 Square::Square(int side): Rectangle("Square", side, side){}

 int main(int argc, char **argv){
 Square sq(10);
 cout << "Square area: " << sq.area() << endl;
 Triangle t1(3, 6), t2;
 cout << "Triangle 1 area: " << t1.area()
 //!FIXME: t1.getName()
 << " Name: " << t1.getName() << endl;

 cout << "Triangle 2 area: " << t2.area()
 << " Name: " << t2.getName() << endl;
 return 0;
 }