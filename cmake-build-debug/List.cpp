//
// Created by mark on 12.02.21.
//

#include "List.h"

template<class T>
List<T>::List(string type){
    if (type == "int"){
        Node <int> gtg();
    }else if (type == "double") {
        Node <double> gtg();
    }else if (type == "string") {
        Node <string> gtg();
    }
}
