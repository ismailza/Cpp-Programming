#include <iostream>

#include "Matrice.cpp"

using namespace std;

int main()
{
  cout << "Matrice 1:" << endl;
  Matrice matrice1(2, 2);
  matrice1.saisie();
  matrice1.print();
  
  cout << "Matrice 2:" << endl;
  Matrice matrice2(2, 2);
  matrice2.saisie();
  matrice2.print();

  cout << "Matrice 3 = Matrice 1 + Matrice 2:" << endl;
  Matrice matrice3 = matrice1 + matrice2;
  matrice3.print();

  cout << "Matrice 4 = Matrice 1 - Matrice 2:" << endl;
  Matrice matrice4 = matrice1 - matrice2;
  matrice4.print();

  cout << "Matrice 5 = Matrice 1 * Matrice 2:" << endl;
  Matrice matrice5 = matrice1 * matrice2;
  matrice5.print();

  cout << "Matrice 6 = Matrice 1 * 2:" << endl;
  Matrice matrice6 = matrice1 * 2;
  matrice6.print();

  cout << "Matrice 7 = Matrice 1:" << endl;
  Matrice matrice7;
  matrice7 = matrice1;
  matrice7.print();

  return 0;
}