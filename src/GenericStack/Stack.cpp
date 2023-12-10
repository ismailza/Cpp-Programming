#include <iostream>

#include "Stack.h"

using namespace std;

template <class T> Stack<T>::Stack()
{
  this->top = nullptr;
}

template <class T> Stack<T>::Stack(const Stack<T> &S)
{
  Stack<T> *tmp = new Stack();
  StackNode<T> *ptr = S.top;
  while (ptr)
  {
    tmp->push(ptr->getData());
    ptr = ptr->getNext();
  }
  while (tmp->top)
    this->push(tmp->pop());
  delete tmp;
}

template <class T> Stack<T>::~Stack()
{
  while (this->top)
    this->pop();
}

template <class T> bool Stack<T>::isEmpty()
{
  return !this->top;
}

template <class T> T Stack<T>::peek()
{
  return this->top->getData();
}

template <class T> void Stack<T>::push(T data)
{
  StackNode<T> *node = new StackNode(data);
  node->setNext(this->top);
  this->top = node;
}

template <class T> T Stack<T>::pop()
{
  if (!this->top)
  {
    cout << "Stack is empty" << endl;
    return 0;
  }
  StackNode<T> *node = this->top;
  T data = node->getData();
  this->top = this->top->getNext();
  delete node;
  return data;
}

template <class T> void Stack<T>::print()
{
  if (!this->top)
    cout << "Stack is empty" << endl;
  else
  {
    Stack<T> *tmp = new Stack;
    StackNode<T> *ptr;
    while (this->top)
    {
      cout << this->top->getData() << "\t";
      ptr = this->top;
      this->top = this->top->getNext();
      ptr->setNext(tmp->top);
      tmp->top = ptr;
    }
    while (tmp->top)
    {
      ptr = tmp->top;
      tmp->top = tmp->top->getNext();
      ptr->setNext(this->top);
      this->top = ptr;
    }
    delete tmp;
    cout << endl;
  }
}

template <class T> int Stack<T>::size()
{
  int size = 0;
  Stack<T> *tmp = new Stack;
  StackNode<T> *ptr;
  while (this->top)
  {
    size++;
    ptr = this->top;
    this->top = this->top->getNext();
    ptr->setNext(tmp->top);
    tmp->top = ptr;
  }
  while (tmp->top)
  {
    ptr = tmp->top;
    tmp->top = tmp->top->getNext();
    ptr->setNext(this->top);
    this->top = ptr;
  }
  delete tmp;
  return size;
}

template <class T> void Stack<T>::operator=(const Stack<T> &S)
{
  while (this->top)
    this->pop();
  Stack<T> *tmp = new Stack();
  StackNode<T> *ptr = S.top;
  while (ptr)
  {
    tmp->push(ptr->getData());
    ptr = ptr->getNext();
  }
  while (tmp->top)
    this->push(tmp->pop());
  delete tmp;
}

template <class T> Stack<T> Stack<T>::operator+(const Stack<T> &S)
{
  Stack<T> tmp;
  StackNode<T> *ptr = this->top;
  while (ptr)
  {
    tmp.push(ptr->getData());
    ptr = ptr->getNext();
  }
  ptr = S.top;
  while (ptr)
  {
    tmp.push(ptr->getData());
    ptr = ptr->getNext();
  }
  return tmp;
}

template <class T> void Stack<T>::operator+(T data)
{
  StackNode<T> *node = new StackNode(data);
  node->setNext(this->top);
  this->top = node;
}
