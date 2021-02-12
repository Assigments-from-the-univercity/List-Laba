//
// Created by mark on 12.02.21.
//

#include <iostream>
#include "List.h"

List::List() {
    begin.setValue(0);
}

List::List(int value) {
    begin.setValue(value);
}

void List::add(int value) {
    Node *current = &begin;
    while ((*current).getNext() != nullptr) {
        current = (*current).getNext(); //доходим до конца списка
    }
    Node *last = new Node(value);
    (*current).setNext(last);
}

void List::print() {
    Node *current = &begin;
    while (current) {
        cout << current->getValue() << " ";
        current = current->getNext();
    }
    cout << endl;
}

void List::copy(List list) {
    Node *currentTo = &begin;
    Node *currentFrom = &(list.begin);

    currentTo->setValue(currentFrom->getValue());

    while (currentFrom->getNext()) {
        Node *last = new Node();
        (*currentTo).setNext(last);

        currentTo = currentTo->getNext();
        currentFrom = currentFrom->getNext();

        currentTo->setValue(currentFrom->getValue());
    }
}