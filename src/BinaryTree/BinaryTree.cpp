#include <iostream>

#include "BinaryTree.h"

using namespace std;

BinaryTree::BinaryTree()
{
  this->root = nullptr;
}

BinaryTree::~BinaryTree()
{
  this->destroyTree(this->root);
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

void BinaryTree::remove(int data)
{
  if (!this->root)
    cout << "Empty tree" << endl;
  else if (this->remove(this->root, data))
    cout << "Removed " << data << endl;
  else
    cout << "Could not find " << data << endl;
}

int BinaryTree::remove(Node *node, int data)
{
  if (node->getData() == data)
  {
    Node *temp = node;
    if (!node->getLeft())
      node = node->getRight();
    else if (!node->getRight())
      node = node->getLeft();
    else
    {
      Node *parent = node;
      temp = node->getLeft();
      while (temp->getRight())
      {
        parent = temp;
        temp = temp->getRight();
      }
      node->setData(temp->getData());
      if (parent == node)
        parent->setLeft(temp->getLeft());
      else
        parent->setRight(temp->getLeft());
    }
    delete temp;
    return 1;
  }
  else if (data < node->getData())
  {
    if (node->getLeft())
      return this->remove(node->getLeft(), data);
  }
  else
  {
    if (node->getRight())
      return this->remove(node->getRight(), data);
  }
  return 0;
}

void BinaryTree::destroyTree(Node *node)
{
  if (node)
  {
    this->destroyTree(node->getLeft());
    this->destroyTree(node->getRight());
    delete node;
  }
}