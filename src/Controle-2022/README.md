# Contrôle en POO en C++ - 2022

## Exercice 1
Réaliser la classe suivante et surcharger l'opérateur << :
```
class Chaine
{
  protected:
    char *m_Chaine;     // la chaîne en elle-même
    int m_Size;         // la longueur de la chaîne
  public:
    Chaine();
    Chaine(char *);
    Chaine(const Chaine &);
    ~Chaine();
    Chaine &operator=(const Chaine &);
};
```

## Exercice 2
1. Réaliser la classe suivante:
```
class Matrice
{
  typedef double *ligne;
  ligne *Line;
  int n;
  int m;

  public:
    Matrice(int, int);
    Matrice(Matrice &);
    Matrice &operator=(const Matrice &);
    ~Matrice();
};
```
2. Ajouter une fonction membre qui permet de permuter les éléments de la matrice selon sa diagonale.

## Exercice 3
1. Réaliser la classe suivante:
```
struct Noeud {
  int donnee;
  Noeud *Prochine;
};

class Liste
{
  Noeud *tete;
  public:
    Liste();
    ~Liste();
    void push(int);
};
```

2. Ecrivez une fonction nommée `nouveau_trie` qui prend une file d'entiers (Queue) déja triée par valeur absolue, et la modifie pour que les entiers soient triés normalement (par exemple {1, -2, 3, -5, 7} sera changé en {-5, -2, 1, 3, 7}).