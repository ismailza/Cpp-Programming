#include <iostream>
#include <cstring>

class A
{
  private:
    char *s;
  public:
    A() {s = nullptr;}
    ~A() {delete[] s;}
};

class B : public A
{
  private:
    char *s;
  public:
    B() {
      s = nullptr;
    }
    B(const char *s) {
      this->s = new char[strlen(s) + 1];
      strcpy(this->s, s);
    }
    B(const B &other) {
      this->s = new char[strlen(other.s) + 1];
      strcpy(this->s, other.s);
    }
    ~B() {
      delete[] s;
    }
    void operator=(const B &other) {
      delete[] this->s;
      this->s = new char[strlen(other.s) + 1];
      strcpy(this->s, other.s);
    }
    void show() {
      std::cout << s << std::endl;
    }
};

int main()
{
  B b1("abc");
  B b2(b1);
  B b3;
  b3 = b2;
  b3.show();

  return 0;
}