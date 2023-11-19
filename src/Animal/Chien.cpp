#include <iostream>

#include "Chien.h"

using namespace std;

Chien::Chien() : Animal(4) {}

void Chien::print()
{
  cout << "Chien" << endl;
}