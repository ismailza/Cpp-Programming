#ifndef STACK_H
#define STACK_H

class Stack {
  private:
    int *arr;
    int top;
  public:
    Stack();
    Stack(const Stack &);
    ~Stack();
    void push(int);
    int pop();
    int peek();
    int size();
    bool isEmpty();
    void print();
    void reset();
    void operator = (const Stack &);
};

#endif