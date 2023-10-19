#include <iostream>

#include "Point.cpp"

int main()
{
  Point p1(12, 13);
  cout << "p1 = ";
  p1.afficher();
  
  Point p2;
  p2.saisie();
  cout << "p2 = ";
  p2.afficher();

  p1.echelle(3.4, 2);
  cout << "p1 = ";
  p1.afficher();

  p2.translater(1, 2);
  cout << "Apres translation de p2, p2 =";
  p2.afficher();

  p2.distance(p1);
  cout << "La distance entre p1 et p2 est " << p2.distance(p1) << endl;

  Point p3 = p1 + p2;
  cout << "p3 = ";
  p3.afficher();

  return 0;
}