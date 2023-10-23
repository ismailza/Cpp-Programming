#include <iostream>

#include "Circle.cpp"

using namespace std;

int main()
{
  Circle c1(1, 2, 3);
  Circle c2(c1);
  cout << "c1: " << endl;
  c1.print();
  cout << "c2: " << endl;
  c2.print();

  Circle c3(4, 5, 6);
  c3 = c1;
  cout << "c3: " << endl;
  c3.print();

  Point p1(7, 8);
  p1.afficher();

  p1 = c3;
  cout << "p1: " << endl;
  p1.afficher();

  return 0;
}