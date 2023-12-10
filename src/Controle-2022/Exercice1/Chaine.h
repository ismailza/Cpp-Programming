#ifndef CHAINES_H
#define CHAINES_H

class Chaine
{
  protected:
    char *m_Chaine;                     // la chaîne en elle-même
    int m_Size;                         // la longueur de la chaîne
  public:
    Chaine();                           // constructeur par défaut
    Chaine(const char *);               // constructeur à partir d'une chaîne
    Chaine(const Chaine &);             // constructeur par copie
    ~Chaine();                          // destructeur
    Chaine &operator=(const Chaine &);  // opérateur d'affectation
    friend std::ostream &operator<<(std::ostream &, const Chaine &); // opérateur d'affichage
};

#endif