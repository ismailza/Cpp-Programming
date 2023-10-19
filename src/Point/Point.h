#ifndef POINT_H
#define POINT_H

class Point
{
  private:
    float x;
    float y;

  public:
    Point();
    Point(float, float);
    Point(const Point &);
    void setX(float);
    void setY(float);
    float getX();
    float getY();
    void saisie();
    void afficher();
    void translater(float, float);
    void echelle(float, float);
    float distance(Point);
    Point operator+(const Point &);
    void operator=(const Point &);
};

#endif