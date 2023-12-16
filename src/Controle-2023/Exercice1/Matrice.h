#ifndef MATRCIE_H
#define MATRICE_H

class Matrice
{
  typedef double *ligne;
  ligne *Line;
  int n;
  int m;

  public:
    Matrice(int, int);
    Matrice(const Matrice &);
    Matrice &operator=(const Matrice &);
    ~Matrice();
    friend std::ostream &operator<<(std::ostream &, const Matrice &);
    bool estDiagonale();
    void swap();
    void set(int, int, double);
};

#endif