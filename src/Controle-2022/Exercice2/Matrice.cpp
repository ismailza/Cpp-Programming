#include <iostream>

#include "Matrice.hpp"

using namespace std;

Matrice::Matrice(int n, int m) : n(n), m(m)
{
  this->Line = new ligne[n];
  for (int i = 0; i < n; i++)
  {
    this->Line[i] = new double[m];
    for (int j = 0; j < m; j++)
      this->Line[i][j] = 0;
  }
}

Matrice::Matrice(const Matrice &M) : n(M.n), m(M.m)
{
  this->Line = new ligne[this->n];
  for (int i = 0; i < this->n; i++)
  {
    this->Line[i] = new double[this->m];
    for (int j = 0; j < this->m; j++)
      this->Line[i][j] = M.Line[i][j];
  }
}

Matrice &Matrice::operator=(const Matrice &M)
{
  if (this != &M)
  {
    for (int i = 0; i < n; i++)
      delete[] Line[i];
    delete[] Line;
    
    this->n = M.n;
    this->m = M.m;
    this->Line = new ligne[this->n];
    for (int i = 0; i < this->n; i++)
    {
      this->Line[i] = new double[this->m];
      for (int j = 0; j < this->m; j++)
        this->Line[i][j] = M.Line[i][j];
    }
  }
  return *this;
}

Matrice::~Matrice()
{
  for (int i = 0; i < n; i++)
    delete[] Line[i];
  delete[] Line;
}

/**
 * @brief Transpose la matrice selon la diagonale
 * @details Si la matrice n'est pas carrée, la fonction ne fait rien
 * Sinon, elle parcourt la matrice selon la diagonale et échange les éléments
*/
void Matrice::swap()
{
  int v;
  if (this->n == this->m)
  {
    for (int i = 0; i < this->n; i++)
      for (int j = i + 1; j < this->m; j++)
      {
        v = this->Line[i][j];
        this->Line[i][j] = this->Line[j][i];
        this->Line[j][i] = v;
      }
  }
  else
    cout << "Cannot swap!!" << endl;
}

void Matrice::print()
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
      cout << Line[i][j] << "\t";
    cout << endl;
  }
}

void Matrice::set(int i, int j, double value)
{
  if (0 <= i && i < n && 0 <= j && j < m)
    Line[i][j] = value;
}
