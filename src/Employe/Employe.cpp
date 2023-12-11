#include <iostream>

#include "Employe.h"

Employe::Employe(string nom = "", string prenom = "", int age = 0, double salaire = 0) : Individu(nom, prenom, age)
{
  this->_salaire = salaire;
}

Employe::Employe(const Employe &employe) : Individu(employe)
{
  this->_salaire = employe._salaire;
}

double Employe::salaire()
{
  return this->_salaire;
}

void Employe::affiche()
{
  Individu::affiche();
  cout << "Salaire\t: " << this->_salaire << endl;
}

Employe &Employe::operator=(const Employe &employe)
{
  Individu::operator=(employe);
  this->_salaire = employe._salaire; 
  return *this;
}