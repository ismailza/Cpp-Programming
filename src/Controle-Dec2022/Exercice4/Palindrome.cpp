#include <iostream>
#include <string>

#include "../../GenericStack/Stack.cpp"

using namespace std;

/**
 * @brief Check if a string is a palindrome
 * @param str The string to check
 * @return true if the string is a palindrome, false otherwise
*/
bool palindrome(const string str)
{
  Stack<char> stack;
  int lenght = str.length();
  int n = lenght / 2;
  for (int i = 0; i < n; i++)
    stack.push(str[i]);
  for (int i = n + 1; i < lenght; i++)
    if (stack.pop() != str[i])
      return false;
  return true;
}

/**
 * @brief Check an expression for balanced parentheses and accolades
 * @param str The expression to check
 * @return -1 if the expression is balanced, the index of the first unbalanced character otherwise
*/
int checkExpression(const string str)
{
  Stack<char> stack;
  int i;
  char c, t;
  for (i = 0; i < str.length(); i++)
  {
    c = str[i];
    if (c == '(' || c == '{')
      stack.push(c);
    else if (c == ')' || c == '}')
    {
      if (stack.isEmpty())
        return i;
      t = stack.pop();
      if ((c == ')' && t != '(') || (c == '}' && t != '{'))
        return i;
    }
  }
  return stack.isEmpty() ? -1 : i;
}

int main()
{
  string str;
  cout << "Enter a string: ";
  cin >> str;
  cout << "Is " << str << " a palindrome? " << (palindrome(str) ? "Yes" : "No") << endl;

  cout << "Enter an expression: ";
  cin >> str;
  switch (int i = checkExpression(str))
  {
    case -1:
      cout << "The expression is balanced" << endl;
      break;
    default:
      cout << "The expression is not balanced, first unbalanced character at index " << i << endl;
      break;
  }

  return 0;
}