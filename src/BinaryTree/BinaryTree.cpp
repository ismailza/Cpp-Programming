#include <iostream>

#include "BinaryTree.h"

using namespace std;

BinaryTree::BinaryTree()
{
  this->root = nullptr;
}

BinaryTree::~BinaryTree()
{
  delete this->root;
}

Node *BinaryTree::getRoot()
{
  return this->root;
}

void BinaryTree::setRoot(Node *root)
{
  this->root = root;
}

void BinaryTree::insert(int value)
{
  if (!this->root)
    this->root = new Node(value);
  else
    this->insert(this->root, value);
}

void BinaryTree::insert(Node *node, int data)
{
  if (data < node->getData())
  {
    if (!node->getLeft())
      node->setLeft(new Node(data));
    else
      this->insert(node->getLeft(), data);
  }
  else
  {
    if (!node->getRight())
      node->setRight(new Node(data));
    else
      this->insert(node->getRight(), data);
  }
}

void BinaryTree::printInOrder()
{
  if (!this->root)
    cout << "Empty tree";
  else
    this->printInOrder(this->root);
  cout << endl;
}

void BinaryTree::printInOrder(Node *node)
{
  if (node->getLeft())
    this->printInOrder(node->getLeft());
  cout << node->getData() << " ";
  if (node->getRight())
    this->printInOrder(node->getRight());
}

void BinaryTree::printPreOrder()
{
  if (!this->root)
    cout << "Empty tree";
  else
    this->printPreOrder(this->root);
  cout << endl;
}

void BinaryTree::printPreOrder(Node *node)
{
  cout << node->getData() << " ";
  if (node->getLeft())
    this->printPreOrder(node->getLeft());
  if (node->getRight())
    this->printPreOrder(node->getRight());
}

void BinaryTree::printPostOrder()
{
  if (!this->root)
    cout << "Empty tree";
  else
    this->printPostOrder(this->root);
  cout << endl;
}

void BinaryTree::printPostOrder(Node *node)
{
  if (node->getLeft())
    this->printPostOrder(node->getLeft());
  if (node->getRight())
    this->printPostOrder(node->getRight());
  cout << node->getData() << " ";
}