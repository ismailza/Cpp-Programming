#include <iostream>

class A
{
  public:
    int p;
    A(int a) {p = a;}
};

class B
{
  public:
    int p;
    B() {p = 20;}
    void show(const char str[]) const {std::cout << str << '\n';}
};

class C : public A, public B
{
  private:
    int v;
  public:
    /**
     * !! La classe A n'a pas de constructeur par défaut, alors il faut appeler son constructeur ici
    */
    C() : v(10) {}
    void show() const {std::cout << v << '\n';}
};

int main()
{
  C c;
  /**
   * !! l'attribut p dans la classe C est ambigus, car les classes A et B dont elle hérite ont un attribut publique p
   * !! Pour résoudre ce problème, il suffit de spécifier le membre de la classe dont on veut accéder (A::p ou B::p)
  */
  c.p = 10;
  /**
   * !! La fonction show() est ambigus, car la classe B dont elle hérite a une fonction publique show()
   * !! Pour résoudre ce problème, il suffit de spécifier la methode de la classe dont on veut accéder (B::show())
  */
  c.show("test");

  return 0;
}
