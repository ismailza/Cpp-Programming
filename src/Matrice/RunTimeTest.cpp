#include <iostream>
#include <chrono>
#include "Matrice.cpp"

using namespace std;

int main()
{
  Matrice M(300, 300);

  // M.print();
  auto start = chrono::high_resolution_clock::now();
  Matrice M2 = M^100;
  auto end = chrono::high_resolution_clock::now();
  chrono::duration<double> duration = end - start;

  cout << "Execution time (Recursive): " << duration.count() << " seconds" << endl;

  start = chrono::high_resolution_clock::now();
  Matrice M3 = M.pow(100);
  end = chrono::high_resolution_clock::now();
  cout << "Execution time (Iterative): " << duration.count() << " seconds" << endl;

  // M2.print();

  return 0;
}