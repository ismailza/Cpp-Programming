#include <iostream>

#include "Rectangle.h"

using namespace std;

Rectangle::Rectangle(float hauteur, float largeur) : Carre(hauteur), largeur(largeur) {}

Rectangle::Rectangle(float x, float y, float hauteur, float largeur) : Carre(x, y, hauteur), largeur(largeur) {}

void Rectangle::afficher()
{
  cout << "Rectangle : Hauteur : " << this->cote << " - Largeur : "<< this->largeur <<" - Centre : (" << this->x << " , " << this->y << ")" << endl;
}

double Rectangle::surface()
{
  return this->cote * this->largeur;
}