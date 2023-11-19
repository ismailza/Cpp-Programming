#ifndef CARRE_H
#define CARRE_H

#include "Forme2D.cpp"

class Carre : public Forme2D
{
  private:
    float cote;

  public:
    Carre(float cote);
    Carre(float x, float y, float cote);
    void afficher();
    double surface();
};

#endif // CARRE_H