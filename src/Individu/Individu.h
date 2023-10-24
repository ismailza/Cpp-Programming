#ifndef INDIVIDU_H
#define INDIVIDU_H

#include <string>
using namespace std;

class Individu
{
  protected:
    int _age;
    string _nom;
    string _prenom;
  public:
    Individu(string, string, int);
    Individu(const Individu &);
    string nom(void);
    string prenom(void);
    int age(void);
    void affiche(void);
    void operator=(const Individu &);
};

#endif