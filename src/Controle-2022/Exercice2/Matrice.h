#ifndef MATRCIE_HPP
#define MATRICE_HPP

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
    void swap();
    void print();
    void set(int, int, double);
};

#endif