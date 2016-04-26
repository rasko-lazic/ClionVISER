//
// Created by rasko-lazic on 4/26/2016.
//

#include "DLList.h"

listElement* DLList::getElement(string index) {
    listElement* iter = first;

    while(iter != nullptr) {
        if(iter->value == index) {
            return iter;
        }
        iter = iter->next;
    }
}

void DLList::setElement(string str) {
    listElement* e = new listElement;
    e->value = str;

    if(first = nullptr) {
        first = e;
        last = e;
    } else {
        e->previous = last;
        last->next = e;
        last = e;
    }
}

