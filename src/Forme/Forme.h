#ifndef FORME_H
#define FORME_H

class Forme
{
  protected:
    float x;
    float y;

  public:
    Forme(float x = 0, float y = 0);
    virtual void afficher() = 0;
    virtual double surface() = 0;
};

#endif // FORME_H