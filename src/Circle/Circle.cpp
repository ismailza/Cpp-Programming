#include <iostream>
#include <math.h>

#include "Circle.h"

using namespace std;

Circle::Circle(float radius) : Point()
{
  this->radius = radius;
}

Circle::Circle(float x, float y, float r) : Point(x, y)
{
  this->radius = r;
}

Circle::Circle(const Circle &c) : Point(c)
{
  this->radius = c.radius;
}

void Circle::setRadius(float r)
{
  this->radius = r;
}

float Circle::getRadius()
{
  return this->radius;
}

float Circle::getArea()
{
  return M_PI * pow(this->radius, 2);
}

float Circle::getPerimeter()
{
  return 2 * M_PI * this->radius;
}

void Circle::print()
{
  cout << "Circle: (" << this->getX() << ", " << this->getY() << ") r = " << this->radius << endl;
}

void Circle::operator=(const Circle &c)
{
  Point::operator=(c);
  this->radius = c.radius;
}