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
        if (current->getValue() == value) {
            return;
        }
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

bool List::isInList(int value) {
    Node *current = &begin;
    while (current) {
        if (current->getValue() == value) {
            return true;
        }
        current = current->getNext();
    }
    return false;
}

int List::size() {
    Node *current = &begin;
    int size = 0;
    while (current) {
        size++;
        current = current->getNext();
    }
    return size;
}

void List::unity(List list) {
    Node *pr = &(list.begin);
    while (pr) {
        this->add(pr->getValue());
        pr = pr->getNext();
    }
}

void List::intersection(List list) {
    Node *pr = &(list.begin);
    List newList;
    Node *newCurrent = &(newList.begin);

    while (pr) {
        if (this->isInList(pr->getValue())) {
            newList.add(pr->getValue());
        }
        pr = pr->getNext();
    }

    newList.begin = *(newList.begin.getNext());
    this->copy(newList);
}

bool List::isEqual(List list) {
    Node *currentThis = &begin;
    Node *currentList = &(list.begin);

    if (this->size() != list.size()) {
        return false;
    }

    while (currentThis) {
        if (currentThis->getValue() != currentList->getValue()) {
            return false;
        }

        currentThis = currentThis->getNext();
        currentList = currentList->getNext();
    }

    return true;
}

bool List::isIn(List list) {
    Node *currentThis = &begin;

    while (currentThis) {
        if (!(list.isInList(currentThis->getValue()))) {
            return false;
        }

        currentThis = currentThis->getNext();
    }

    return true;
}

void List::change(int order, int newValue) {
    Node *current = &begin;
    while (current && order > 0) {
        current = current->getNext();
        order--;
    }
    if (current) {
        current->setValue(newValue);
    }
}

void List::del(int order) {
    if (order == 0) {
        begin = *begin.getNext();
        return;
    }

    Node *current = &begin;
    Node *prev;

    while (current && order > 1) {
        current = current->getNext();
        order--;
    }
    if (!current) {
        return;
    }

    prev = current;
    current = current->getNext();
    if (current->getNext() == nullptr) {
        delete current;
        prev->setNext(nullptr);
        return;
    }

    prev->setNext(current->getNext());

    delete current;
}