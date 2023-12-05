#include <iostream>

#include "Node.h"

using namespace std;

template <class T>
Node<T>::Node(T data)
{
  this->data = data;
  this->left = NULL;
  this->right = NULL;
}

template <class T>
Node<T>::~Node()
{
  delete this->left;
  delete this->right;
}

template <class T>
T Node<T>::getData()
{
  return this->data;
}

template <class T>
void Node<T>::setData(T data)
{
  this->data = data;
}

template <class T>
Node<T> *Node<T>::getLeft()
{
  return this->left;
}

template <class T>
void Node<T>::setLeft(Node<T> *left)
{
  this->left = left;
}

template <class T>
Node<T> *Node<T>::getRight()
{
  return this->right;
}

template <class T>
void Node<T>::setRight(Node<T> *right)
{
  this->right = right;
}
