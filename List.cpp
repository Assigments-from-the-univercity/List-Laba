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

void List::insert(int value) {
    Node current = begin;
    while (current.getNext() != nullptr) {
        current = *current.getNext(); //доходим до конца списка
    }
    Node last(value);
    current.setNext(&last);
}

void List::print() {
    Node current = begin;
    while (current.getNext() != nullptr) {
        current = *current.getNext();
        cout << current.getValue() << " ";
    }
}