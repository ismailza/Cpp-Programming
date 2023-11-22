#ifndef FORME2D_H
#define FORME2D_H

#include "Forme.h"

class Forme2D : public Forme
{

  public:
    Forme2D(float x = 0, float y = 0);
    virtual void afficher() = 0;
    virtual double surface() = 0;
};

#endif // FORME2D_H