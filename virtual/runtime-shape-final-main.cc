#include <iostream>
using namespace std;
#include "runtime-shape-final.h"

int main()
{
  double width, height;
  cin >> width >> height; 
  Rectangle r(width, height);
  double side;
  cin >> side;
  Square s(side);
  double radius;
  cin >> radius;
  Circle c(radius);
  //--polymorphism--
  Shape* shapes[] = {&r, &s, &c};
  for (auto shape : shapes)
    cout << "area = " << shape->area() << endl;
  //--end--
  return 0;
}
