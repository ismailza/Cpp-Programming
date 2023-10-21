#ifndef BINARYTREE_H
#define BINARYTREE_H

#include "Node.cpp"

class BinaryTree
{
  private:
    Node *root;
    void insert(Node *, int);
    void printInOrder(Node *);
    void printPreOrder(Node *);
    void printPostOrder(Node *);
    int remove(Node *, int);
  public:
    BinaryTree();
    ~BinaryTree();
    Node *getRoot();
    void setRoot(Node *);
    void insert(int);
    void printInOrder();
    void printPreOrder();
    void printPostOrder();
    void remove(int);
};

#endif