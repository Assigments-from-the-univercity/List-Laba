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

    cout << list2.isInList(25) << " " << list2.isInList(13) << endl;

    cout << list2.size() << " " << list.size() << endl;

    List list3(14);
    list3.add(15);
    list3.add(16);
    list3.unity(list);
    list3.print();

    List list4(10);
    list4.add(16);
    list4.intersection(list3);
    list4.print();

    cout << list3.isEqual(list2) << " " << list2.isEqual(list) << endl;

    cout << list3.isIn(list2) << " " << list4.isIn(list3) << endl;

    list4.change(1, 55);
    list4.print();

    list4.del(1);
    list4.print();

    list3.print();
    list3.del(2);
    list3.print();
    list3.del(4);
    list3.print();
}
