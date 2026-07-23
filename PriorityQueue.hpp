#ifndef PRIORITYQUEUE_H
#define PRIORITYQUEUE_H
#include <iostream>

template<class T>
class PriorityQueue {
private:
    T* items;
    int n;
    int capacity;
    void fixUp(int k);
    void fixDown(int k);
public:
    PriorityQueue(int capacity);
    bool insert(T elt);
    bool getmax(T& elt);
    int size();
    bool isEmpty();
    ~PriorityQueue();
};

template<class T>
PriorityQueue<T>::PriorityQueue(int capacity) {
    items = new T[capacity];
    n = 0;
    this->capacity = capacity;
}

template<class T>
bool PriorityQueue<T>::insert(T elt) {
    if (n < capacity) {
        items[n++] = elt;
        fixUp(n - 1);
        return true;
    }
    else {
        std::cerr << "PriorityQueue overflow: cannot insert " << elt << std::endl;
        return false;
    }
}

template<class T>
bool PriorityQueue<T>::getmax(T& elt) {
    if (n > 0) {
        elt = items[0];
        items[0] = items[--n];
        fixDown(0);
        return true;
    }
    else {
        std::cerr << "PriorityQueue underflow: cannot getmax from empty queue" << std::endl;
        return false;
    }
}

template<class T>
int PriorityQueue<T>::size() {
    return n;
}

template<class T>
bool PriorityQueue<T>::isEmpty() {
    return n == 0;
}

template<class T>
PriorityQueue<T>::~PriorityQueue() {
    delete[] items;
}

template<class T>
void PriorityQueue<T>::fixUp(int k) {
    T temp;
    while (k > 0) {
        int parent = (k - 1) / 2;
        if (items[parent].priority >= items[k].priority) {
            break;
        }
        temp = items[parent];
        items[parent] = items[k];
        items[k] = temp;
        k = parent;
    }
}

template<class T>
void PriorityQueue<T>::fixDown(int k) {
    T temp;
    while (k < n / 2) {
        int child = 2 * k + 1;
        if (child + 1 < n && items[child].priority < items[child + 1].priority) {
            child++;
        }
        if (items[k].priority >= items[child].priority) {
            break;
        }
        temp = items[k];
        items[k] = items[child];
        items[child] = temp;
        k = child;
    }
}

#endif