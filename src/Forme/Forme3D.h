#ifndef FORME3D_H
#define FORME3D_H

#include "Forme.cpp"

class Forme3D : public Forme
{
private:
  float z;
public:
  Forme3D(float = 0, float = 0, float = 0);
};

#endif // FORME3D_H