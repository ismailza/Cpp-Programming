#ifndef LISTE_H
#define LISTE_H

struct Noeud {
  int donnee;
  Noeud *Prochine;
  Noeud(int data, Noeud *next = nullptr) : donnee(data), Prochine(next) {}
};

class Liste
{
  Noeud *tete;
  public:
    Liste();
    ~Liste();
    void push(int);
    void push(Noeud *);
    void print();
    void nouveau_trie();
};

#endif