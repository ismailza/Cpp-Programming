#ifndef STACKNODE_H
#define STACKNODE_H

template <class T> class StackNode
{
  private:
    T data;
    StackNode<T> *next;

  public:
    StackNode(T);
    T getData();
    void setData(T);
    StackNode<T> *getNext();
    void setNext(StackNode<T> *);
};

#endif