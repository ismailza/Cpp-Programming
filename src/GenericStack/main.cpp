#include <iostream>
#include <string>
#include "Stack.cpp"

using namespace std;

int main()
{
  Stack<int> intStack1;
  for (int i = 1; i <= 5; ++i)
    intStack1.push(i);

  cout << "Integer Stack 1: ";
  intStack1.print();

  Stack<int> intStack2;
  for (int i = 6; i <= 10; ++i)
    intStack2.push(i);

  cout << "Integer Stack 2: ";
  intStack2.print();

  Stack<int> intStack3 = intStack1 + intStack2;
  cout << "Integer Stack 3: ";
  intStack3.print();

  Stack<double> doubleStack;
  doubleStack.push(3.14);
  doubleStack.push(2.71);

  cout << "Double Stack: ";
  doubleStack.print();

  Stack<string> stringStack;
  stringStack.push("Hello");
  stringStack.push("World");

  cout << "String Stack: ";
  stringStack.print();

  return 0;
}
