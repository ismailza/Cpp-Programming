#include <iostream>
#include <math.h>

#include "Triangle.cpp"

// main function
int main()
{
  Triangle t1;
  t1.saisie();
  cout << "Triangle t1: ";
  t1.afficher();

  Triangle t2(Point(1, 1), Point(2, 2), Point(3, 3));
  cout << "Triangle t2: ";
  t2.afficher();

  t1.translater(1, 1);
  cout << "Triangle t1 apres translation: ";
  t1.afficher();

  t1.echelle(2, 2);
  cout << "Triangle t1 apres echelle: ";
  t1.afficher();

  if (t1.isocele())
    cout << "Le triangle t1 est isocele" << endl;
  else
    cout << "Le triangle t1 n'est pas isocele" << endl;

  if (t1.equilateral())
    cout << "Le triangle t1 est equilateral" << endl;
  else
    cout << "Le triangle t1 n'est pas equilateral" << endl;

  cout << "Triangle 3 = Triangle 1:" << endl;
  Triangle t3 = t1;
  t3.afficher();

  cout << "Le perimetre du triangle t1 est: " << t1.perimetre() << endl;

  cout << "Le nombre de triangles est: " << Triangle::getNbTriangles() << endl;
  
  return 0;
}