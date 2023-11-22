#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Carre.h"

class Rectangle : public Carre
{
private:
  float largeur;

public:
  Rectangle(float, float);
  Rectangle(float, float, float, float);
  void afficher();
  double surface();
};

#endif // RECTANGLE_H