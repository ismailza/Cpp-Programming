#ifndef BINARYTREE_H
#define BINARYTREE_H

#include "Node.cpp"

template <class T>
class BinaryTree
{
  private:
    int size;
    Node<T> *root;

    void insertInOrder(Node<T> *, T);
    void insert(Node<T> *, T, int);
    void printInOrder(Node<T> *);
    void printPreOrder(Node<T> *);
    void printPostOrder(Node<T> *);
    void destroyTree(Node<T> *);
    void displayHorizontal(Node<T> *, int);
  public:
    BinaryTree();
    ~BinaryTree();
    Node<T> *getRoot();
    void setRoot(Node<T> *);
    void insertInOrder(T);
    void insert(T);
    void printInOrder();
    void printPreOrder();
    void printPostOrder();
    void displayHorizontal();
};

#endif