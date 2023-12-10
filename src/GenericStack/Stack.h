#ifndef STACK_H
#define STACK_H

#include "StackNode.cpp"

template <class T>
class Stack
{
  private:
    StackNode<T> *top;

  public:
    Stack();
    Stack(const Stack<T> &);
    ~Stack();
    bool isEmpty();
    T peek();
    void push(T);
    T pop();
    void print();
    int size();
    void operator=(const Stack<T> &);
    Stack<T> operator+(const Stack<T> &);
    void operator+(T);
};

#endif
