#include <iostream>

#include "Carre.h"

using namespace std;

Carre::Carre(float cote) : Forme2D(), cote(cote) {}

Carre::Carre(float x, float y, float cote) : Forme2D(x, y), cote(cote) {}

void Carre::afficher()
{
  cout << "Carre : Cote : " << this->cote << " - Centre : (" << this->x << " , " << this->y << ")" << endl;
}

double Carre::surface()
{
  return (this->cote * this->cote);
}