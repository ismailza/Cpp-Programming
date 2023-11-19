#ifndef FORME2D_H
#define FORME2D_H

#include "Forme.cpp"

class Forme2D : public Forme
{

  public:
    Forme2D(float = 0, float = 0);
    virtual void afficher() = 0;
    virtual double surface() = 0;
};

#endif // FORME2D_H