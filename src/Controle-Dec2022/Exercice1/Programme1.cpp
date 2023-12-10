#include <iostream>

class A
{
  /**
   * ! On doit déclarer l'attribut p comme étant protégé pour être accessible depuis la classe B,
   * ! ou d'ajouter la methode 'int getP()'
  */
  private:
    int p;
  public:
    A(int a) {p = a;}
};

class B : public A
{
  public:
    /**
     * @brief Constructeur de la classe B.
     * !! La classe A n'a pas de constructeur par défaut, alors il faut appeler son constructeur ici.
     * * B(int v) : A(v) {std::cout << v << '\n';}
    */
    B(int v) {std::cout << v << '\n';}

    /**
     * @brief 
     * !! L'attribut p herité de la classe A est privé, ie: n'est pas accessible
     * !! Il faut que l'attribut p soit protected, ou d'ajouter son getter.
    */
    void show(int v) const {std::cout << p + v << '\n';}
};

int main()
{
  B b(10);
  A& r = b;
  /**
   * !! r est une référence de type A, il a l'access just pour les membres de la classe A
   * !! Pour résoudre ce problème, on peut utiliser le polymorphisme en ajoutant une methode abstraite
   * !! dans la classe A
  */
  r.show(20);

  return 0;
}
