//
// Created by mark on 12.02.21.
//

#ifndef LIST_LABA_NODE_H
#define LIST_LABA_NODE_H

using namespace std;

template<class T>
class Node {
    T value;
    Node *next;
public:
    Node();

    Node(T value);

    T getValue();

    Node * getNext();
};


#endif //LIST_LABA_NODE_H
