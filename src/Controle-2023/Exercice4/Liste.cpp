#include <iostream>

#include "Liste.h"

using namespace std;

template <class T> Liste<T>::Liste() : head(nullptr) {}

template <class T> Liste<T>::~Liste()
{
  Noeud *current;
  while (head != nullptr)
  {
    current = head;
    head = head->next;
    delete current;
  }
}

template <class T> void Liste<T>::push(T data)
{
  Noeud *newNode = new Noeud(data);
  if (head == nullptr)
    head = newNode;
  else
  {
    Noeud *current = head;
    while (current->next != nullptr)
      current = current->next;
    current->next = newNode;
  }
}

template <class T> void Liste<T>::print()
{
  Noeud *current = head;
  while (current != nullptr)
  {
    cout << current->data << " ";
    current = current->next;
  }
  cout << endl;
}