#include <iostream>

#include "Matrice.h"

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

ostream &operator<<(ostream &out, const Matrice &M)
{
  for (int i = 0; i < M.n; i++)
  {
    for (int j = 0; j < M.m; j++)
      out << M.Line[i][j] << " ";
    out << "\n";
  }
  return out;
}

bool Matrice::estDiagonale()
{
  for (int i = 0; i < this->n; i++)
    for (int j = i + 1; j < this->m; j++)
      if (this->Line[i][j] || this->Line[j][i])
        return false;
  return true;
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

void Matrice::set(int i, int j, double value)
{
  if (0 <= i && i < n && 0 <= j && j < m)
    Line[i][j] = value;
}
