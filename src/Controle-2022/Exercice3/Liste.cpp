#include <iostream>

#include "Liste.hpp"

using namespace std;

Liste::Liste()
{
  this->tete = nullptr;
}

Liste::~Liste()
{
  Noeud *ptr;
  while (tete)
  {
    ptr = tete;
    tete = tete->Prochine;
    delete ptr;
  }
}

void Liste::push(int data)
{
  if (!tete)
    tete = new Noeud(data);
  else
  {
    Noeud *ptr = tete;
    while (ptr->Prochine)
      ptr = ptr->Prochine;
    ptr->Prochine = new Noeud(data);
  }
}

void Liste::print()
{
  Noeud *ptr = tete;
  while (ptr)
  {
    cout << ptr->donnee << " ";
    ptr = ptr->Prochine;
  }
  cout << endl;
}

/**
 * @brief Ajoute un noeud à la fin de la file
 * @param ptr Pointeur vers le noeud à ajouter
*/
void Liste::push(Noeud *ptr)
{
  if (!tete)
    tete = ptr;
  else
  {
    Noeud *p = tete;
    while (p->Prochine)
      p = p->Prochine;
    p->Prochine = ptr;
  }
}

/**
 * @brief Trié une file ordonnée par valeur absolue par ordre croissant
 * @details On crée deux files, une pour les valeurs négatives et une pour les valeurs positives.
 * On parcourt la file initiale et on insère les valeurs négatives au début de la file négative et les valeurs positives à la fin de la file positive.
 * On fusionne les deux files dans la file initiale.
*/
void Liste::nouveau_trie()
{
  Liste *negative = new Liste();  // Liste for negative values
  Liste *positive = new Liste();  // Liste for positive values
  Noeud *ptr;
  while (tete)
  {
    ptr = tete;
    tete = tete->Prochine;
    ptr->Prochine = nullptr;
    if (ptr->donnee < 0)  // If the value is negative, insert it at the beginning of the negative list
    {
      ptr->Prochine = negative->tete;
      negative->tete = ptr;
    }
    else  // If the value is positive, push it in the positive list
      positive->push(ptr);
  }
  // Merge the two lists into the current queue
  while (negative->tete)
  {
    ptr = negative->tete;
    negative->tete = negative->tete->Prochine;
    ptr->Prochine = nullptr;
    this->push(ptr);
  }
  while (positive->tete)
  {
    ptr = positive->tete;
    positive->tete = positive->tete->Prochine;
    ptr->Prochine = nullptr;
    this->push(ptr);
  }
}