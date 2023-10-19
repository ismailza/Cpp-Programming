#include <iostream>
#include <string>

#include "Etudiant.h"

using namespace std;

// * Initialisation du compteur d'instances
int Etudiant::nbEtudiants = 0;
// * Constructeur par défaut
Etudiant::Etudiant()
{
  matricule = ++nbEtudiants;
  nom = "etud" + to_string(matricule);
  nbNotes = 0;
  notes = nullptr;
}
// * Constructeur avec paramètres
Etudiant::Etudiant(string nom, int nbNotes)
{
  matricule = ++nbEtudiants;
  this->nom = nom;
  this->nbNotes = nbNotes;
  notes = new float[nbNotes];
}
// * Destructeur
Etudiant::~Etudiant()
{
  delete[] notes;
}
// * Constructeur de copie
Etudiant::Etudiant(const Etudiant &e)
{
  matricule = ++nbEtudiants;
  nom = e.nom;
  nbNotes = e.nbNotes;
  notes = new float[nbNotes];
  for (int i = 0; i < nbNotes; i++)
    notes[i] = e.notes[i];
}
// * Accesseurs
int Etudiant::getMatricule()
{
  return matricule;
}
string Etudiant::getNom()
{
  return nom;
}
int Etudiant::getNbNotes()
{
  return nbNotes;
}
// * Mutateurs
void Etudiant::setNom(string nom)
{
  this->nom = nom;
}
void Etudiant::setNbNotes(int nbNotes)
{
  this->nbNotes = nbNotes;
  notes = new float[nbNotes];
}
// * Méthodes
// * Saisie des notes d'un étudiant
void Etudiant::saisie()
{
  cout << "Saisie des notes :" << endl;
  for (int i = 0; i < nbNotes; i++)
  {
    cout << "Note " << i + 1 << " : ";
    cin >> notes[i];
  }
}
// * Affichage des informations d'un étudiant
void Etudiant::affichage()
{
  cout << "Matricule : " << matricule << endl;
  cout << "Nom : " << nom << endl;
  cout << "Nombre de notes : " << nbNotes << endl;
  cout << "Notes : ";
  for (int i = 0; i < nbNotes; i++)
    cout << notes[i] << " ";
  cout << endl;
}
// * Calcul de la moyenne d'un étudiant
float Etudiant::moyenne()
{
  if (nbNotes == 0)
    return 0;
  float moy = 0;
  for (int i = 0; i < nbNotes; i++)
    moy += notes[i];
  return moy / nbNotes;
}
// * Vérification de l'admissibilité d'un étudiant
bool Etudiant::admis()
{
  return moyenne() >= 10;
}
// * Vérification de l'égalité de la moyenne de deux étudiants
bool Etudiant::comparer(Etudiant e)
{
  return moyenne() == e.moyenne();
}
