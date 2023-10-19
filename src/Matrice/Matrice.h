#ifndef MATRICE_H
#define MATRICE_H

class Matrice
{
  private:
    int **matrice;
    int n;
    int m;
  public:
    Matrice(int);
    Matrice(int, int);
    Matrice(const Matrice &);
    ~Matrice();
    void saisie();
    void set(int, int, int);
    int get(int, int);
    void print();
    int getN();
    int getM();
    Matrice operator+(const Matrice &);
    Matrice operator-(const Matrice &);
    Matrice operator*(const Matrice &);
    Matrice operator*(const int &);
    void operator=(const Matrice &);
};

#endif