#ifndef LISTE_H
#define LISTE_H

template <class T>
class Liste
{
  struct Noeud
  {
    T data;
    Noeud *next;
    Noeud(T data, Noeud *next = nullptr) : data(data), next(next) {}
  };
  Noeud *head;
  public:
    Liste();
    ~Liste();
    void push(T);
    void print();
};

#endif // LISTE_H