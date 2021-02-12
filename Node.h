//
// Created by mark on 12.02.21.
//

#ifndef LIST_LABA_NODE_H
#define LIST_LABA_NODE_H

using namespace std;

class Node {
    int value;
    Node *next;
public:
    Node();

    Node(int value);

    int getValue();

    void setValue(int value);

    void setNext(Node *next));

    void set(int value, Node *next);

    Node * getNext();
};


#endif //LIST_LABA_NODE_H
