#include <iostream>
#include <math.h>

#include "Vecteur3D.h"

using namespace std;

Vecteur3D::Vecteur3D(double i = 0, double j = 0, double k =0)
{
  this->i = i;
  this->j = j;
  this->k = k;
}

void Vecteur3D::enter()
{
  cout << "Enter i-> : ";
  cin >> this->i;
  cout << "Enter j-> : ";
  cin >> this->j;
  cout << "Enter k-> : ";
  cin >> this->k;
}

void Vecteur3D::print()
{
  cout << this->i << "i-> + " << this->j << "j-> + " << this->k << "k->" << endl;
}

Vecteur3D Vecteur3D::operator+(const Vecteur3D &v)
{
  return Vecteur3D (this->i + v.i, this->j + v.j, this->k + v.k);
}

Vecteur3D Vecteur3D::operator-(const Vecteur3D &v)
{
  return Vecteur3D (this->i - v.i, this->j - v.j, this->k - v.k);
}

Vecteur3D Vecteur3D::operator*(const double x)
{
  return Vecteur3D (this->i * x, this->j * x, this->k * x);
}

Vecteur3D Vecteur3D::operator/(const double x)
{
  return Vecteur3D (this->i / x, this->j / x, this->k / x);
}

Vecteur3D &Vecteur3D::operator=(const Vecteur3D &v)
{
  this->i = v.i;
  this->j = v.j;
  this->k = v.k;
  return *this;
}

double Vecteur3D::scalaire(const Vecteur3D &v)
{
  return (this->i * v.i + this->j * v.j + this->k * v.k);
}

Vecteur3D Vecteur3D::vectoriel(const Vecteur3D &v)
{
  return Vecteur3D((this->j * v.k - this->k * v.j), (this->k * v.i - this->i * v.k), (this->i * v.j - this->j * v.i));
}

double Vecteur3D::norme()
{
  return (sqrt(pow(this->i, 2) + pow(this->j, 2) + pow(this->k, 2)));
}