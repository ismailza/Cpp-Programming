#include <iostream>

#include "Cercle.h"

using namespace std;

Cercle::Cercle(float rayon) : Forme2D(), rayon(rayon) {}

Cercle::Cercle(float x, float y, float rayon) : Forme2D(x, y), rayon(rayon) {}

void Cercle::afficher()
{
  cout << "Cercle : Rayon : " << this->rayon << " - Centre : (" << this->x << " , " << this->y << ")" << endl;
}

double Cercle::surface()
{
  return this->rayon * this->rayon * 3.14;
}