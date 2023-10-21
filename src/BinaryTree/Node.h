#ifndef NODE_H
#define NODE_H

class Node
{
  private:
    int data;
    Node *left;
    Node *right;
  public:
    Node(int);
    ~Node();
    int getData();
    void setData(int);
    Node *getLeft();
    void setLeft(Node *);
    Node *getRight();
    void setRight(Node *right);
};

#endif