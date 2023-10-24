#include <iostream>

#include "Employe.cpp"

int main()
{
  Employe E1("ZAHIR", "Ismail", 22, 11000);
  E1.affiche();

  Employe E2;
  cout << "***************" << endl;
  E2.affiche();

  Employe E3(E1);
  cout << "***************" << endl;
  E3.affiche();

  return 0;
}