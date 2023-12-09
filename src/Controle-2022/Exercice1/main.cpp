#include <iostream>

#include "Chaine.cpp"

using namespace std;

int main()
{
  Chaine chaine1("Hello");
  Chaine chaine2(" World");
  Chaine chaine3("!");
  Chaine chaine4(chaine1);
  Chaine chaine5 = chaine2;

  cout << chaine1 << chaine5 << chaine3 << endl;
    
  return 0;
}