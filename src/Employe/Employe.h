#ifndef EMPLOYE_H
#define EMPLOYE_H

#include <string>

#include "../Individu/Individu.cpp"

using namespace std;

class Employe : public Individu
{
  private:
    double _salaire;

  public:
    Employe(string, string, int, double);
    Employe(const Employe &);
    double salaire(void);
    void affiche(void);
    void operator=(const Employe &);
};

#endif