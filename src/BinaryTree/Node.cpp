#include <iostream>

#include "Node.h"

using namespace std;

Node::Node(int data)
{
  this->data = data;
  this->left = NULL;
  this->right = NULL;
}

Node::~Node()
{
  delete this->left;
  delete this->right;
}

int Node::getData()
{
  return this->data;
}

void Node::setData(int data)
{
  this->data = data;
}

Node *Node::getLeft()
{
  return this->left;
}

void Node::setLeft(Node *left)
{
  this->left = left;
}

Node *Node::getRight()
{
  return this->right;
}

void Node::setRight(Node *right)
{
  this->right = right;
}
