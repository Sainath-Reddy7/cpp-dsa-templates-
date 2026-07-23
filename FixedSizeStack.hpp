#ifndef FIXEDSIZESTACK_H
#define FIXEDSIZESTACK_H

#include<iostream>


template<class T>
class FixedSizeStack{
private:
    T *items;
    int n;
    int capacity;

public:
    FixedSizeStack(int capacity);
    void push(T item);
    bool pop(T &out);
    int size();
    bool isEmpty();

    ~FixedSizeStack();
};

template<class T>
FixedSizeStack<T>::FixedSizeStack(int capacity)
{
    this->capacity = capacity;
    items = new T[capacity];
    n = 0;
}
template<class T>
void FixedSizeStack<T>::push(T elt)
{
    if (n < capacity) {
        items[n++] = elt;
        std::cout << "Pushed: " << elt << std::endl;
        std::cout << "Stack size: " << n << std::endl;
    } else {
        std::cerr << "Stack overflow: cannot push " << elt << std::endl;
    }
    
}
template<class T>
bool FixedSizeStack<T>::pop(T &out)
{
    if (n == 0) {
        std::cerr << "Stack underflow: cannot pop from empty stack" << std::endl;
        return false;
    }
    out = items[--n];
    std::cout << "Popped: " << out << std::endl;
    std::cout << "Stack size: " << n << std::endl;
    return true;  
}
template<class T>
bool FixedSizeStack<T>::isEmpty()
{
    return n == 0;  
}

template<class T>
int FixedSizeStack<T>::size()
{
    return n;
}

template<class T>
FixedSizeStack<T>::~FixedSizeStack()
{
  delete [] items;
}


#endif
