#include <iostream>

#include "BinaryTree.cpp"

using namespace std;

int main()
{
  BinaryTree tree;
  tree.insert(5);
  tree.insert(3);
  tree.insert(7);
  tree.insert(2);
  tree.insert(4);
  tree.insert(6);
  tree.insert(8);
  cout << "In order: ";
  tree.printInOrder();
  cout << "Pre order: ";
  tree.printPreOrder();
  cout << "Post order: ";
  tree.printPostOrder();
  cout << "Display horizontal: " << endl;
  tree.displayHorizontal();
  tree.remove(5);
  cout << "In order: ";
  tree.printInOrder();
  cout << "Display horizontal: " << endl;
  tree.displayHorizontal();

  return 0;
}