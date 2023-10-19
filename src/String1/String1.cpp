#include <iostream>
#include <cstring>

#include "String1.h"

using namespace std;

String1::String1(const char *p)
{
  _p = new char[strlen(p) + 1];
  strcpy(_p, p);
}

String1::~String1()
{
  delete _p;
}

char *String1::affiche()
{
  return _p;
}