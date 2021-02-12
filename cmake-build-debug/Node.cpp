//
// Created by mark on 12.02.21.
//

#include "Node.h"

using namespace std;

Node::Node() {
    this->value = 0;
    next = nullptr;
}

Node::Node(int value) {
    this->value = value;
    next = nullptr;
}

int Node::getValue() {
    return value;
}

void Node::setValue(int value) {
    this->value = value;
}

void Node::setNext(Node *next) {
    this->next = next;
}

void Node::set(int value, Node *next) {
    this->value = value;
    this->next = next;
}

Node *Node::getNext() {
    return next;
}