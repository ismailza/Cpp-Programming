#include <iostream>

#include "Stack.cpp"
#include "StackNode.cpp"

using namespace std;

int main()
{
  Stack stack;

  stack.push(1);
  stack.push(2);
  stack.push(3);
  stack.push(4);
  stack.push(5);

  cout << "Stack size: " << stack.size() << endl;

  // Stack stack2(&stack);
  Stack stack2 = stack;

  stack2.push(6);

  stack.print();
  cout << "***" << endl;
  stack2.print();

  return 0;
}