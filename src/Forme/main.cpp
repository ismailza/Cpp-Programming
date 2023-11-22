#include <iostream>

#include "Carre.h"
#include "Cercle.h"
#include "Cube.h"
#include "Rectangle.h"

using namespace std;

int main()
{
  Forme *list[6];

  list[0] = new Carre(5);
  list[1] = new Cercle(5);
  list[2] = new Cube(5);
  list[3] = new Cube(5, 5, 5, 5);
  list[4] = new Rectangle(5, 5);

  for (int i = 0; i < 5; i++)
  {
    list[i]->afficher();
    cout << "Surface : " << list[i]->surface() << endl;
    cout << "*********************************" << endl;
  }

  return 0;
}