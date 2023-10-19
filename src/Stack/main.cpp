#include <iostream>

#include "Stack.cpp"

using namespace std;

int main()
{
  Stack stack;
  stack.push(1);
  stack.push(2);
  stack.push(3);
  stack.push(4);

  cout << "Size: " << stack.size() << endl;
  stack.print();

  cout << stack.pop() << endl;
  cout << stack.pop() << endl;

  cout << "Size: " << stack.size() << endl;
  stack.print();

  cout << "Stack2 = Stack" << endl;
  Stack stack2;
  stack2 = stack;
  stack2.print();

  cout << "Stack3 = Stack + Stack2: " << endl;
  Stack stack3 = stack + stack2;
  stack3.print();

  return 0;
}