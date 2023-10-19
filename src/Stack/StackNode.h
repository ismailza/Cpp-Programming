#ifndef STACKNODE_H
#define STACKNODE_H

class StackNode
{
  private:
    int data;
    StackNode *next;

  public:
    StackNode(int);
    int getData();
    void setData(int);
    StackNode *getNext();
    void setNext(StackNode *);
};

#endif