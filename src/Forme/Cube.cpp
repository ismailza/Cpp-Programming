#include <iostream>

#include "Cube.h"

using namespace std;

Cube::Cube(float cote) : Forme3D(), cote(cote) {}

Cube::Cube(float x, float y, float z, float cote) : Forme3D(x, y, z), cote(cote) {}

void Cube::afficher()
{
  cout << "Cube : Cote : " << this->cote << " - Centre : (" << this->x << " , " << this->y << " , " << this->z << ")" << endl;
}

double Cube::surface()
{
  return 6 * this->cote * this->cote;
}

double Cube::volume()
{
  return this->cote * this->cote * this->cote;
}