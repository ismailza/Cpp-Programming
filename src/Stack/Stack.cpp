#include <iostream>

#include "Stack.h"

using namespace std;

Stack::Stack()
{
  this->top = nullptr;
}

Stack::Stack(const Stack &S)
{
  Stack *tmp = new Stack();
  StackNode *ptr = S.top;
  while (ptr)
  {
    tmp->push(ptr->getData());
    ptr = ptr->getNext();
  }
  while (tmp->top)
    this->push(tmp->pop());
  delete tmp;
}

Stack::~Stack()
{
  while (this->top)
    this->pop();
}

bool Stack::isEmpty()
{
  return !this->top;
}

int Stack::peek()
{
  return this->top->getData();
}

void Stack::push(int data)
{
  StackNode *node = new StackNode(data);
  node->setNext(this->top);
  this->top = node;
}

int Stack::pop()
{
  if (!this->top)
  {
    cout << "Stack is empty" << endl;
    return -1;
  }
  StackNode *node = this->top;
  int data = node->getData();
  this->top = this->top->getNext();
  delete node;
  return data;
}

void Stack::print()
{
  if (!this->top)
    cout << "Stack is empty" << endl;
  else
  {
    Stack *tmp = new Stack;
    StackNode *ptr;
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

int Stack::size()
{
  int size = 0;
  Stack *tmp = new Stack;
  StackNode *ptr;
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

Stack &Stack::operator=(const Stack &S)
{
  while (this->top)
    this->pop();
  Stack *tmp = new Stack();
  StackNode *ptr = S.top;
  while (ptr)
  {
    tmp->push(ptr->getData());
    ptr = ptr->getNext();
  }
  while (tmp->top)
    this->push(tmp->pop());
  delete tmp;
  return *this;
}

Stack Stack::operator+(const Stack &S)
{
  Stack *tmp = new Stack();
  Stack result;
  StackNode *ptr = this->top;
  while (ptr)
  {
    tmp->push(ptr->getData());
    ptr = ptr->getNext();
  }
  ptr = S.top;
  while (ptr)
  {
    tmp->push(ptr->getData());
    ptr = ptr->getNext();
  }
  while (tmp->top)
    result.push(tmp->pop());
  delete tmp;
  return result;
}

void Stack::operator+(int data)
{
  StackNode *node = new StackNode(data);
  node->setNext(this->top);
  this->top = node;
}