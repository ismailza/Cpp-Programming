#include <iostream>
#include <math.h>

#include "Triangle.h"

using namespace std;

int Triangle::nbTriangles = 0;

Triangle::Triangle()
{
  Point p1, p2, p3;
  this->sommets[0] = p1;
  this->sommets[1] = p2;
  this->sommets[2] = p3;
  nbTriangles++;
}

Triangle::Triangle(Point p1, Point p2, Point p3)
{
  this->sommets[0] = p1;
  this->sommets[1] = p2;
  this->sommets[2] = p3;
  nbTriangles++;
}

Triangle::Triangle(const Triangle &T)
{
  this->sommets[0] = T.sommets[0];
  this->sommets[1] = T.sommets[1];
  this->sommets[2] = T.sommets[2];
  nbTriangles++;
}

Triangle::~Triangle()
{
  nbTriangles--;
}

int Triangle::getNbTriangles()
{
  return nbTriangles;
}

void Triangle::saisie()
{
  for (int i = 0; i < 3; i++)
  {
    cout << "Saisie du sommet " << i + 1 << endl;
    this->sommets[i].saisie();
  }
}

void Triangle::afficher()
{
  for (int i = 0; i < 3; i++)
  {
    cout << "Sommet " << i + 1 << endl;
    this->sommets[i].afficher();
  }
}

void Triangle::translater(float x, float y)
{
  for (int i = 0; i < 3; i++)
    this->sommets[i].translater(x, y);
}

void Triangle::echelle(float k, float l)
{
  for (int i = 0; i < 3; i++)
    this->sommets[i].echelle(k, l);
}

float Triangle::cote1()
{
  return this->sommets[0].distance(this->sommets[1]);
}

float Triangle::cote2()
{
  return this->sommets[1].distance(this->sommets[2]);
}

float Triangle::cote3()
{
  return this->sommets[2].distance(this->sommets[0]);
}

bool Triangle::isocele()
{
  return (this->cote1() == this->cote2() || this->cote2() == this->cote3() || this->cote3() == this->cote1());
}

bool Triangle::equilateral()
{
  return (this->cote1() == this->cote2() && this->cote2() == this->cote3());
}

float Triangle::perimetre()
{
  return this->cote1() + this->cote2() + this->cote3();
}

Triangle &Triangle::operator=(const Triangle &T)
{
  this->sommets[0] = T.sommets[0];
  this->sommets[1] = T.sommets[1];
  this->sommets[2] = T.sommets[2];
  return *this;
}