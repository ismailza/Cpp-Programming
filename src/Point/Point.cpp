#include <iostream>
#include <cmath>

#include "Point.h"

using namespace std;

Point::Point()
{
  this->x = 0;
  this->y = 0;
}

Point::Point(float x, float y)
{
  this->x = x;
  this->y = y;
}

Point::Point(const Point &X)
{
  this->x = X.x;
  this->y = X.y;
}

void Point::setX(float x)
{
  this->x = x;
}

void Point::setY(float y)
{
  this->y = y;
}

float Point::getX()
{
  return this->x;
}

float Point::getY()
{
  return this->y;
}

void Point::saisie()
{
  cout << "x = ";
  cin >> this->x;
  cout << "y = ";
  cin >> this->y;
}

void Point::afficher()
{
  cout << "(" << this->x << ", " << this->y << ")" << endl;
}

void Point::translater(float x, float y)
{
  this->x += x;
  this->y += y;
}

void Point::echelle(float k, float l)
{
  this->x *= k;
  this->y *= l;
}

float Point::distance(Point X)
{
  return sqrt(pow(this->x - X.x, 2) + pow(this->y - X.y, 2));
}

Point Point::operator+(const Point &X)
{
  Point P;
  P.x = this->x + X.x;
  P.y = this->y + X.y;
  return P;
}

void Point::operator=(const Point &X)
{
  this->x = X.x;
  this->y = X.y;
}