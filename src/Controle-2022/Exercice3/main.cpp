#include <iostream>

#include "Liste.cpp"

using namespace std;

int main()
{
  Liste l;
  l.push(1);
  l.push(-2);
  l.push(3);
  l.push(-5);
  l.push(7);

  cout << "Queue l ordered by absolute value:" << endl;
  l.print();

  l.nouveau_trie();
  cout << "Queue l ordered by value:" << endl;
  l.print();

  return 0;  
}