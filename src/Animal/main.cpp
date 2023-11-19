#include <iostream>

#include "Animal.cpp"
#include "Chat.cpp"
#include "Chien.cpp"

using namespace std;

int main()
{
  Animal *listAnimals[3];

  listAnimals[0] = new Chat();
  listAnimals[1] = new Chien();
  

  listAnimals[0]->print();
  listAnimals[1]->print();
  

  delete listAnimals[0];
  delete listAnimals[1];

  return 0;
}