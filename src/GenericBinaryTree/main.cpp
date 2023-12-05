#include <iostream>
#include <chrono>

#include "BinaryTree.cpp"

using namespace std;

int main()
{
  BinaryTree<int> tree;
  
  chrono::steady_clock::time_point begin = chrono::steady_clock::now();
  
  for (int i = 0; i < 100; i++)
    tree.insert(i);
  
  chrono::steady_clock::time_point end = chrono::steady_clock::now();
  cout << "Time difference = " << chrono::duration_cast<chrono::microseconds>(end - begin).count() << " [µs]" << endl;

  cout << "Display horizontal: " << endl;
  tree.displayHorizontal();

  return 0;
}