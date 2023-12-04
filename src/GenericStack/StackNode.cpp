#include <iostream>

#include "StackNode.h"

using namespace std;

template <class T>
StackNode<T>::StackNode(T data)
{
  this->data = data;
  this->next = nullptr;
}

template <class T>
T StackNode<T>::getData()
{
  return this->data;
}

template <class T>
void StackNode<T>::setData(T data)
{
  this->data = data;
}

template <class T>
StackNode<T> *StackNode<T>::getNext()
{
  return this->next;
}

template <class T>
void StackNode<T>::setNext(StackNode<T> *next)
{
  this->next = next;
}
