#include <iostream>

#include "Stack.h"

using namespace std;

Stack::Stack()
{
  arr = nullptr;
  top = -1;
}

Stack::Stack(const Stack &stack)
{
  this->reset();
  top = stack.top;
  arr = new int[top + 1];
  for (int i = 0; i <= top; i++)
    arr[i] = stack.arr[i];
}

Stack::~Stack()
{
  delete[] arr;
}

void Stack::push(int data)
{
  arr = (int *)realloc(arr, sizeof(int)*(++top + 1));
  arr[top] = data;
}

int Stack::pop()
{
  if (isEmpty())
  {
    cout << "Stack is empty" << endl;
    return -1;
  }
  int data = arr[top];
  arr = (int *)realloc(arr, sizeof(int) * (top--));
  return data;
}

int Stack::peek()
{
  if (isEmpty())
  {
    cout << "Stack is empty" << endl;
    return -1;
  }
  return arr[top];
}

int Stack::size()
{
  return top + 1;
}

bool Stack::isEmpty()
{
  return top == -1;
}

void Stack::print()
{
  if (this->isEmpty())
    cout << "Stack is empty" << endl;
  else
  {
    Stack tmp;
    while (!this->isEmpty())
    {
      cout << this->peek() << endl;
      cout << &this->arr[this->top] << endl;
      tmp.push(this->pop());
    }
    while (!tmp.isEmpty())
      this->push(tmp.pop());
  }
}

void Stack::reset()
{
  top = -1;
  delete[] arr;
}

void Stack::operator = (const Stack &stack)
{
  this->reset();
  this->top = stack.top;
  this->arr = new int[this->top + 1];
  for (int i = 0; i <= this->top; i++)
    this->arr[i] = stack.arr[i];
}