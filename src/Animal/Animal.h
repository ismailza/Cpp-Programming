#ifndef ANIMAL_H
#define ANIMAL_H

class Animal
{
  protected:
    int nbPieds;

  public:
    Animal(int);
    virtual ~Animal();
    int getNbPieds();
    virtual void print();
};

#endif