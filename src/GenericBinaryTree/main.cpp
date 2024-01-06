#include <iostream>
#include <chrono>

#include "BinaryTree.cpp"

using namespace std;
using namespace chrono;

int main()
{
  BinaryTree<int> tree;
  high_resolution_clock::time_point start, end;

  int n = 100;

  start = high_resolution_clock::now();
  
  for (int i = 0; i < n; i++)
    tree.insert(i);

  end = high_resolution_clock::now();
  
  cout << "Time to insert " << n << " elements is : " << duration_cast<milliseconds>(end - start).count() << " milliseconds" << endl;

  cout << "Display horizontal: " << endl;
  tree.displayHorizontal();

  cout << "Display vertical: " << endl;
  start = high_resolution_clock::now();
  tree.displayTreeBFS();
  end = high_resolution_clock::now();
  cout << "Time to display using BFS is : " << duration_cast<milliseconds>(end - start).count() << " milliseconds" << endl;
  return 0;
}