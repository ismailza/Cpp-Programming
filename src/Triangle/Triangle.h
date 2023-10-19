#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "../Point/Point.cpp"

class Triangle
{
  private:
    static int nbTriangles;
    Point sommets[3];
  
  public:
    Triangle();
    Triangle(Point , Point , Point);
    Triangle(const Triangle &);
    ~Triangle();
    static int getNbTriangles();
    void saisie();
    void afficher();
    void translater(float, float);
    void echelle(float, float);
    float cote1();
    float cote2();
    float cote3();
    bool isocele();
    bool equilateral();
    float perimetre();
    void operator=(const Triangle &);
};

#endif