#ifndef FORME3D_H
#define FORME3D_H

#include "Forme.h"

class Forme3D : public Forme
{
protected:
  float z;
public:
  Forme3D(float x = 0, float y = 0, float z = 0);
  virtual void afficher() = 0;
  virtual double surface() = 0;
};

#endif // FORME3D_H