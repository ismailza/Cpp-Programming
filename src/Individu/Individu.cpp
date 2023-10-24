#include <iostream>

#include "Individu.h"

Individu::Individu(string nom = "", string prenom = "", int age = 0)
{
  this->_nom = nom;
  this->_prenom = prenom;
  this->_age = age;
}

Individu::Individu(const Individu &individu)
{
  this->_nom = individu._nom;
  this->_prenom = individu._prenom;
  this->_age = individu._age;
}

string Individu::nom()
{
  return this->_nom;
}

string Individu::prenom()
{
  return this->_prenom;
}

int Individu::age()
{
  return this->_age;
}

void Individu::affiche()
{
  cout << "Nom\t: " << this->_nom << endl;
  cout << "Prenom\t: " << this->_prenom << endl;
  cout << "Age\t: " << this->_age << endl;
}

void Individu::operator=(const Individu &individu)
{
  this->_nom = individu._nom;
  this->_prenom = individu._prenom;
  this->_age = individu._age;
}
