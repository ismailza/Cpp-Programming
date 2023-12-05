#include <iostream>

#include "BinaryTree.h"

using namespace std;

template <class T>
BinaryTree<T>::BinaryTree()
{
  this->size = 0;
  this->root = nullptr;
}

template <class T>
BinaryTree<T>::~BinaryTree()
{
  this->destroyTree(this->root);
}

template <class T>
Node<T> *BinaryTree<T>::getRoot()
{
  return this->root;
}

template <class T>
void BinaryTree<T>::setRoot(Node<T> *root)
{
  this->root = root;
}

template <class T>
void BinaryTree<T>::insertInOrder(T value)
{
  if (!this->root)
    this->root = new Node(value);
  else
    this->insertInOrder(this->root, value);
  this->size++;
}

template <class T>
void BinaryTree<T>::insertInOrder(Node<T> *node, T data)
{
  if (data < node->getData())
  {
    if (!node->getLeft())
      node->setLeft(new Node(data));
    else
      this->insertInOrder(node->getLeft(), data);
  }
  else
  {
    if (!node->getRight())
      node->setRight(new Node(data));
    else
      this->insertInOrder(node->getRight(), data);
  }
}

template <class T>
void BinaryTree<T>::printInOrder()
{
  if (!this->root)
    cout << "Empty tree";
  else
    this->printInOrder(this->root);
  cout << endl;
}

template <class T>
void BinaryTree<T>::printInOrder(Node<T> *node)
{
  if (node->getLeft())
    this->printInOrder(node->getLeft());
  cout << node->getData() << " ";
  if (node->getRight())
    this->printInOrder(node->getRight());
}

template <class T>
void BinaryTree<T>::printPreOrder()
{
  if (!this->root)
    cout << "Empty tree";
  else
    this->printPreOrder(this->root);
  cout << endl;
}

template <class T>
void BinaryTree<T>::printPreOrder(Node<T> *node)
{
  cout << node->getData() << " ";
  if (node->getLeft())
    this->printPreOrder(node->getLeft());
  if (node->getRight())
    this->printPreOrder(node->getRight());
}

template <class T>
void BinaryTree<T>::printPostOrder()
{
  if (!this->root)
    cout << "Empty tree";
  else
    this->printPostOrder(this->root);
  cout << endl;
}

template <class T>
void BinaryTree<T>::printPostOrder(Node<T> *node)
{
  if (node->getLeft())
    this->printPostOrder(node->getLeft());
  if (node->getRight())
    this->printPostOrder(node->getRight());
  cout << node->getData() << " ";
}

template <class T>
void BinaryTree<T>::destroyTree(Node<T> *node)
{
  if (node)
  {
    this->destroyTree(node->getLeft());
    this->destroyTree(node->getRight());
    delete node;
  }
}

template <class T>
void BinaryTree<T>::displayHorizontal()
{
  if (!this->root)
    cout << "Empty tree" << endl;
  else
    this->displayHorizontal(this->root, 0);
}

template <class T>
void BinaryTree<T>::displayHorizontal(Node<T> *node, int level)
{
  if (node)
  {
    this->displayHorizontal(node->getRight(), level + 1);
    for (int i = 0; i < level; i++)
      cout << "\t";
    cout << node->getData() << endl;
    this->displayHorizontal(node->getLeft(), level + 1);
  }
}

/**
 * @brief Insert a new node in the tree.
 * @param node The current node in the binary tree.
 * @param data The data to be inserted.
 * @param size The size of the subtree rooted at the current node.
 * @return void
*/
template <class T>
void BinaryTree<T>::insert(Node<T> *node, T data, int size)
{
  if (size % 2)
  {
    if (!node->getLeft())
      node->setLeft(new Node(data));
    else 
      this->insert(node->getLeft(), data, size/2);
  }
  else
  {
    if (!node->getRight())
      node->setRight(new Node(data));
    else
      this->insert(node->getRight(), data, size/2);
  }
}

/**
 * @brief Insert a new node in the tree.
 * @param data The data to be inserted.
 * @return void
*/
template <class T>
void BinaryTree<T>::insert(T data)
{
  if (!this->root)
    this->root = new Node(data);
  else
    this->insert(this->root, data, this->size);
  this->size++;
}