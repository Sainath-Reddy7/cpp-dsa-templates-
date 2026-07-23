#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>

template<class T>
class Queue{
private:
  struct Node{
    T data;
    Node *next;
    Node(T data, Node *next)
    {
      this->data = data;
      this->next = next;
    }
  };
  Node *first, *last;
  int n;

public:
  Queue();
  void enqueue(T elt);
  bool dequeue(T &elt);
  bool isEmpty();
  int size();

  ~Queue();
};
template<class T>
Queue<T>::Queue()
{
  first = nullptr;
  last = nullptr;
  n = 0;
  std::cout << "Queue created." << std::endl;
}
template<class T>
void Queue<T>::enqueue(T elt)
{
  Node *new_node = new Node(elt, nullptr);
  if (last == nullptr) {
    first = last = new_node;
  } else {
    last->next = new_node;
    last = new_node;
  }
  n++; 
}
template<class T>
bool Queue<T>::dequeue(T &elt)
{
  if (first == nullptr) {
    std::cout << "Queue is empty, cannot dequeue." << std::endl;
    return false;
  }
  Node *temp  = first;
  elt = first->data;
  first = first->next;
  
  if (first == nullptr) {
    last = nullptr; // If the queue is now empty
  }

  delete temp ;
  n--;

  std::cout << "Dequeued: " << elt << std::endl;

  return true;

}


template<class T>
bool Queue<T>::isEmpty()
{
  return first == nullptr;
  
}

template<class T>
int Queue<T>::size()
{
  return n;
  
}


template<class T>
Queue<T>::~Queue()
{
  Node *node_deleted;
  for(Node *q = first; q != nullptr;)
    {
      node_deleted = q;
      q = q->next;
      delete node_deleted;
    }
}

#endif
