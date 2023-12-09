#include <iostream>

#include "Matrice.cpp"

using namespace std;

int main()
{
  Matrice m1(3,3);
  m1.set(1,2, 4);
  cout << "M1:" << endl;
  m1.print();

  Matrice m2(m1);
  cout << "M2:" << endl;
  m2.print();
  m2.set(2,1, 5);
  m2.set(0,1, 8);

  Matrice m3(1,1);
  m3 = m2;
  cout << "M3:" << endl;
  m3.print();
  cout << "Swap M3:" << endl;
  m3.swap();
  m3.print();

  return 0;
}