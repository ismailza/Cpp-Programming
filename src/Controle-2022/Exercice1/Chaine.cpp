#include <iostream>

#include "Chaine.hpp"

using namespace std;

Chaine::Chaine()
{
  this->m_Chaine = nullptr;
  this->m_Size = 0;
}

Chaine::Chaine(const char *chaine)
{
  this->m_Size = 0;
  while (chaine[this->m_Size] != '\0')
    this->m_Size++;
  this->m_Chaine = new char[this->m_Size];
  for (int i = 0; i < this->m_Size; i++)
    this->m_Chaine[i] = chaine[i];
  this->m_Chaine[this->m_Size] = '\0';
}

Chaine::Chaine(const Chaine &chaine)
{
  this->m_Size = chaine.m_Size;
  this->m_Chaine = new char[this->m_Size];
  for (int i = 0; i < this->m_Size; i++)
    this->m_Chaine[i] = chaine.m_Chaine[i];
  this->m_Chaine[this->m_Size] = '\0';
}

Chaine::~Chaine()
{
  delete[] m_Chaine;
}

Chaine &Chaine::operator=(const Chaine &chaine)
{
  if (this != &chaine)
  {
    delete[] this->m_Chaine;
    this->m_Size = chaine.m_Size;
    this->m_Chaine = new char[this->m_Size];
    for (int i = 0; i < this->m_Size; i++)
      this->m_Chaine[i] = chaine.m_Chaine[i];
    this->m_Chaine[this->m_Size] = '\0';
  }
  return *this;
}

ostream &operator<<(ostream &out, const Chaine &chaine) {
  if (chaine.m_Chaine != nullptr)
    out << chaine.m_Chaine;
  return out;
}