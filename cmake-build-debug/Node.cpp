//
// Created by mark on 12.02.21.
//

#include "Node.h"

using namespace std;

template<class T>
Node<T>::Node() {}

template<class T>
Node<T>::Node(T value) {
    this->value = value;
    next = nullptr;
}

template<class T>
T Node<T>::getValue() {
    return value;
}

template<class T>
Node<T> *Node<T>::getNext() {
    return next;
}