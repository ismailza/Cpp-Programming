#ifndef ETUDIANT_H
#define ETUDIANT_H

#include <string>

using namespace std;

class Etudiant
{
  private:
    // * Attributs
    int matricule;
    string nom;
    int nbNotes;
    float *notes;

  public:
    // * Compteur d'instances
    static int nbEtudiants;
    // * Constructeur par défaut
    Etudiant();
    // * Constructeur avec paramètres
    Etudiant(string nom, int nbNotes);
    // * Destructeur
    ~Etudiant();
    // * Constructeur de copie
    Etudiant(const Etudiant &e);
    // * Accesseurs
    int getMatricule();
    string getNom();
    int getNbNotes();
    // * Mutateurs
    void setNom(string nom);
    void setNbNotes(int nbNotes);
    // * Méthodes
    // * Saisie des notes d'un étudiant
    void saisie();
    // * Affichage des informations d'un étudiant
    void affichage();
    // * Calcul de la moyenne d'un étudiant
    float moyenne();
    // * Vérification de l'admissibilité d'un étudiant
    bool admis();
    // * Vérification de l'égalité de la moyenne de deux étudiants
    bool comparer(Etudiant e);
};

#endif
