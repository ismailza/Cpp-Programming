#include <iostream>

#include "StackNode.h"

using namespace std;

StackNode::StackNode(int data)
{
  this->data = data;
  this->next = nullptr;
}

int StackNode::getData()
{
  return this->data;
}

void StackNode::setData(int data)
{
  this->data = data;
}

StackNode *StackNode::getNext()
{
  return this->next;
}

void StackNode::setNext(StackNode *next)
{
  this->next = next;
}