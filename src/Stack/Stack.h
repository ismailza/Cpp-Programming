#ifndef STACK_H
#define STACK_H

#include "StackNode.cpp"
class Stack
{
  private:
    StackNode *top;
  public:
    Stack();
    Stack(const Stack &);
    ~Stack();
    bool isEmpty();
    int peek();
    void push(int);
    int pop();
    void print();
    int size();
    void operator=(const Stack &);
    Stack operator+(const Stack &);
    void operator+(int);
};

#endif