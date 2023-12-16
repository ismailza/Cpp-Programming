#include <iostream>
#include <vector>

using namespace std;

/**
 * @brief: Elargit un vecteur d'entiers en doublant les valeurs de chaque élément
 * @param: V, vecteur d'entiers
 * @example: V = {18, 4, 11} => vectElargi(V) = {9, 9, 2, 2, 6, 5}
 * @details:
 * - Pour chaque élément de V, on le divise par 2 et on insère le résultat à la position suivante
 * - On met à jour l'élément courant en lui ajoutant le reste de la division par 2
*/
void vectElargi(vector<int> &V)
{
  int data, size = V.size() * 2;
  for (int i = 0; i < size; i+=2)
  {
    data = V[i] / 2;
    V.insert(V.begin() + i + 1, data);
    V[i] = data + V[i] % 2;
  }
}

int main()
{
  vector<int> V = {18, 4, 11};
  vectElargi(V);
  for (int i = 0; i < V.size(); i++)
    cout << V[i] << " ";
  cout << endl;
  return 0;
}
