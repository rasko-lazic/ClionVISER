//
// Created by rasko-lazic on 4/27/2016.
//

#include "Domaci6Custom.h"
#include "DLList.h"
#include <iostream>

using namespace std;

int Domaci6Custom::execute() {
    DLList newList;

    newList.setElement("Hello");
    newList.setElement("There");
    newList.setElement("World");
    newList.setElement("!!!");

    newList.showList();

    cout << "\nElement with index 2: " << newList.getElement(2) << endl;

    newList.insertAfter(1, "Round");

    cout << "\nList after insert:\n";
    newList.showList();

    newList.removeElement(1);

    cout << "\nList after remove:\n";
    newList.showList();

    return 0;
}
