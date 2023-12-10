#ifndef PERSON_H
#define PERSON_H

template <class T>
class Person
{
  private:
    struct Node
    {
      T data;
      Node *next;
      Node(T data, Node *next = nullptr) : data(data), next(next) {}
    };
    Node *head;
    Node *tail;
  public:
    Person() {
      head = NULL;
      tail = NULL;
    }
    void add(T data) {
      Node *newNode = new Node(data);
      if (head == NULL)
        head = newNode;
      else
        tail->next = newNode;
      tail = newNode;
    }
    void show() {
      Node *current = head;
      while (current != NULL) {
        current->data->show();
        std::cout << "--------------------------\n";
        current = current->next;
      }
    }
};

#endif // PERSON_H
