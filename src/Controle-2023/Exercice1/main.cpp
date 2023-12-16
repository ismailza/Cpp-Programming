#include <iostream>

#include "Matrice.cpp"

using namespace std;

int main()
{
  Matrice m1(3,3);
  m1.set(1,1, 4);
  m1.set(2,2, 7);
  cout << "M1:" << endl;
  cout << m1;
  cout << "M1 " << (m1.estDiagonale() ? "est" : "n'est pas") << " diagonale" << endl;

  Matrice m2(m1);
  m2.set(2,1, 5);
  m2.set(0,1, 8);
  cout << "M2:" << endl;
  cout << m2;
  cout << "M2 " << (m2.estDiagonale() ? "est" : "n'est pas") << " diagonale" << endl;

  Matrice m3(1,1);
  m3 = m2;
  cout << "M3:" << endl;
  cout << m3;
  cout << "Swap M3:" << endl;
  m3.swap();
  cout << m3;

  return 0;
}