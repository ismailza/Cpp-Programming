#ifndef CARRE_H
#define CARRE_H

#include "Forme2D.h"

class Carre : public Forme2D
{
  protected:
    float cote;

  public:
    Carre(float);
    Carre(float, float, float);
    void afficher();
    double surface();
};

#endif // CARRE_H