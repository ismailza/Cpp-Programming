#include <iostream>

#include "Etudiant.cpp"

int main()
{
  // * Création d'un objet Etudiant E avec 3 notes
  Etudiant E("E", 3);
  // * Saisie des notes de l'étudiant E
  E.saisie();
  // * Affichage des informations de l'étudiant E
  E.affichage();
  // * Copie de l'étudiant E dans l'étudiant E1
  Etudiant E1(E);
  // * Affichage des informations de l'étudiant E1
  E1.affichage();
  // * Création d'un objet Etudiant E2 avec 2 notes
  Etudiant E2("E2", 2);
  // * Saisie des notes de l'étudiant E2
  E2.saisie();
  // * Appel des getters de l'étudiant E2
  cout << "Le matricule de l'etudiant E2 : " << E2.getMatricule() << endl;
  cout << "Le nom de l'etudiant E2 : " << E2.getNom() << endl;
  cout << "Le nombre de notes de l'etudiant E2 : " << E2.getNbNotes() << endl;
  cout << "La moyenne de l'etudiant E2 : " << E2.moyenne() << endl;
  // * Verification de l'admissibilité de l'étudiant E2
  if (E2.admis())
    cout << "L'etudiant E2 est admis" << endl;
  else
    cout << "L'etudiant E2 n'est pas admis" << endl;
  // * Comparaison de la moyenne de l'étudiant E2 avec celle de l'étudiant E
  if (E2.comparer(E))
    cout << "Les etudiants E et E2 ont la meme moyenne" << endl;
  else
    cout << "Les etudiants E et E2 n'ont pas la meme moyenne" << endl;

  return 0;
}