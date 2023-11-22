#ifndef CERCLE_H
#define CERCLE_h

#include "Forme2D.h"

class Cercle : public Forme2D
{
  private:
    float rayon;

  public:
    Cercle(float);
    Cercle(float, float, float);
    void afficher();
    double surface();
};

#endif // CERCLE_H