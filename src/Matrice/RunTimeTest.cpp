#include <iostream>
#include <chrono>
#include "Matrice.cpp"

using namespace std;

int main()
{
  Matrice M(1000, 1000);

  auto start = chrono::high_resolution_clock::now();
  Matrice M2 = M.pow2(100);
  auto end = chrono::high_resolution_clock::now();
  chrono::duration<double> duration = end - start;

  cout << "Execution time (pow2): " << duration.count() << " seconds" << endl;

  // M.print();
  // auto start = chrono::high_resolution_clock::now();
  // Matrice M2 = M^100;
  // auto end = chrono::high_resolution_clock::now();
  // chrono::duration<double> duration = end - start;

  // cout << "Execution time (Recursive): " << duration.count() << " seconds" << endl;

  // start = chrono::high_resolution_clock::now();
  // Matrice M3 = M.pow(100);
  // end = chrono::high_resolution_clock::now();
  // cout << "Execution time (Iterative): " << duration.count() << " seconds" << endl;

  // M2.print();

  return 0;
}