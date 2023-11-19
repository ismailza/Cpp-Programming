#include <iostream>

#include "Carre.h"
#include "Cercle.h"
#include "Cube.h"

using namespace std;

int main()
{
  Forme *list[4];
  
  list[0] = new Carre(5);
  list[1] = new Cercle(5);
  list[2] = new Cube(5);
  list[3] = new Cube(5, 5, 5, 5);

  return 0;
}