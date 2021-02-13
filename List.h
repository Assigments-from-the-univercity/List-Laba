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

    bool isInList(int number);

    int size();

    List unity(List list);

    List intersection(List list);

    bool isEqual(List list);

    bool isIn(List list);
};


#endif //LIST_LABA_LIST_H
