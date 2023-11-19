#include <iostream>

#include "Chat.h"

using namespace std;

Chat::Chat() : Animal(4) {}

Chat::~Chat()
{
  cout << "By chat" << endl;
}

void Chat::print()
{
  cout << "Chat" << endl;
}