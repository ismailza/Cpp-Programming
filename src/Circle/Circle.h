#ifndef CIRCLE_H
#define CIRCLE_H

#include "../Point/Point.cpp"

class Circle : public Point
{
  private:
    float radius;
  public:
    Circle(float);
    Circle(float, float, float);
    Circle(const Circle &);
    void setRadius(float);
    float getRadius();
    float getArea();
    float getPerimeter();
    void print();
    void operator=(const Circle &);
};

#endif // CIRCLE_H