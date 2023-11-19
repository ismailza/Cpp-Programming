#include <iostream>

#include "Animal.h"

using namespace std;

Animal::Animal(int n) : nbPieds(n) {}

Animal::~Animal()
{
  cout << "By Animal" << endl;
}

int Animal::getNbPieds()
{
  return this->nbPieds;
}

void Animal::print()
{
  cout << "Animal" << endl;
}