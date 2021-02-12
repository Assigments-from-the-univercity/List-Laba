//
// Created by mark on 12.02.21.
//

#ifndef LIST_LABA_LIST_H
#define LIST_LABA_LIST_H

#include <string>
#include "Node.h"

using namespace std;

template<class T>
class List {
    int size;

    Node<int> begin();

public:
    List(string type);
};


#endif //LIST_LABA_LIST_H
