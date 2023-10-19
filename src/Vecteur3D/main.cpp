#include <iostream>

#include "Vecteur3D.cpp"

using namespace std;

int main()
{
  Vecteur3D v1(1, 2, 3);
  cout << "v1-> = ";
  v1.print();
  Vecteur3D v2;
  v2.enter();
  cout << "v2-> = ";
  v2.print();

  cout << "*** Addition : ***" << endl;
  Vecteur3D v3 = v1 + v2;
  cout << "v3-> = v1-> + v2-> = ";
  v3.print();

  cout << "*** Soustraction : ***" << endl;
  Vecteur3D v4 = v2 - v1;
  cout << "v4-> = v2-> - v1-> = ";
  v4.print();

  cout << "*** Multiplication par un scalaire : ***" << endl;
  Vecteur3D v5 = v3 * 5;
  cout << "v5-> = v4-> * 5 = ";
  v4.print();

  cout << "*** Division par un scalaire : ***" << endl;
  Vecteur3D v6 = v5 / 5;
  cout << "v6-> = v5-> / 5 = ";
  v6.print();

  cout << "*** Affectation : ***" << endl;
  Vecteur3D v7;
  v7 = v4;
  cout << "v7-> = v4-> = ";
  v7.print();

  cout << "*** Produit scalaire : " << endl;
  cout << "v2-> . v4-> = " << v2.scalaire(v4) << endl;

  cout << "*** Produit vectoriel : " << endl;
  cout << "v2-> ^ v4-> = ";
  v2.vectoriel(v4).print();

  cout << "*** Norme : " << endl;
  cout << "|| v6-> || = " << v6.norme() << endl;
  return 0;
}