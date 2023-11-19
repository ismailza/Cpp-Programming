#ifndef FORME_H
#define FORME_H

class Forme
{
  protected:
    float x;
    float y;

  public:
    Forme(float, float);
    virtual void afficher() = 0;
    virtual double surface() = 0;
};

#endif // FORME_H