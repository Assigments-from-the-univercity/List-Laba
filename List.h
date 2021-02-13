//
// Created by mark on 12.02.21.
//

#ifndef LIST_LABA_LIST_H
#define LIST_LABA_LIST_H

#include <string>
#include "Node.h"

using namespace std;

class List {
    Node begin;

public:
    List();

    List(int value);

    void add(int value);

    void print();

    void copy(List list);

    bool isInList(int value);

    int size();

    void unity(List list);

    void intersection(List list);

    void difference(List list);

    bool isEqual(List list);

    bool isIn(List list);

    void change(int order, int newValue);

    void del(int order);
};


#endif //LIST_LABA_LIST_H
