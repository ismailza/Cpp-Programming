#include <iostream>

#include "PointCol.cpp"

using namespace std;

int main()
{
  PointCol p1;
  PointCol p2(1, 2, 3);
  PointCol p3(p2);

  cout << "p1: " << p1.getX() << ", " << p1.getY() << ", " << p1.getCol() << endl;
  cout << "p2: " << p2.getX() << ", " << p2.getY() << ", " << p2.getCol() << endl;
  cout << "p3: " << p3.getX() << ", " << p3.getY() << ", " << p3.getCol() << endl;

  p1.setX(4);
  p1.setY(5);
  p1.setCol(6);

  cout << "p1: " << p1.getX() << ", " << p1.getY() << ", " << p1.getCol() << endl;

  return 0;
}