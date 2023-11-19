#ifndef CUBE_H
#define CUBE_H

#include "Forme3D.h"

class Cube : public Forme3D
{
  private:
    float cote;

  public:
    Cube(float);
    Cube(float, float, float, float);
    void afficher();
    double surface();
    double volume();
};

#endif // CUBE_H