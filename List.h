//
// Created by mark on 12.02.21.
//

#ifndef LIST_LABA_LIST_H
#define LIST_LABA_LIST_H

#include <string>
#include "Node.h"

using namespace std;

class List {
    int size;
    Node begin;

public:
    List();

    List(int value);

    void insert(int value);

    void print();
};


#endif //LIST_LABA_LIST_H
