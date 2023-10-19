#include <iostream>

using namespace std;

typedef struct
{
  // * Attributes
  float x;
  float y;
  // * Methods
  void initPoint(float x, float y)
  {
    this->x = x;
    this->y = y;
  }

  void afficher()
  {
    cout << "(" << this->x << ", " << this->y << ")" << endl;
  }

  void deplacer(int x, int y)
  {
    this->x += x;
    this->y += y;
  }

} Point;

int main()
{
  Point p1;
  p1.initPoint(14, 15);
  p1.afficher();
  p1.deplacer(2, 3);
  p1.afficher();

  return 0;
}