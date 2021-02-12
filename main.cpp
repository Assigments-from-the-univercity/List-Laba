#include <iostream>
#include "List.h"

using namespace std;

int main() {
    List list(10);
    list.add(15);
    list.add(25);
    list.add(35);

    list.print();

    List list2;
    list2.copy(list);

    list2.print();
}
