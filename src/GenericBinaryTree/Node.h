#ifndef NODE_H
#define NODE_H

template <class T>
class Node
{
  private:
    T data;
    Node<T> *left;
    Node<T> *right;

  public:
    Node<T>(T);
    ~Node<T>();
    T getData();
    void setData(T);
    Node<T> *getLeft();
    void setLeft(Node<T> *);
    Node<T> *getRight();
    void setRight(Node<T> *);
};

#endif