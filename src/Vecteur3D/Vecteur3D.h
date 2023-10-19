#ifndef VECTEUR3D_H
#define VECTEUR3D_H

class Vecteur3D
{
private:
  double i, j, k;

public:
  Vecteur3D(double i, double j, double k);
  void enter();
  void print();
  Vecteur3D operator+(const Vecteur3D &);
  Vecteur3D operator-(const Vecteur3D &);
  Vecteur3D operator*(const double);
  Vecteur3D operator/(const double);
  void operator=(const Vecteur3D &);
  double scalaire(const Vecteur3D &);
  Vecteur3D vectoriel(const Vecteur3D &);
  double norme();
};

#endif