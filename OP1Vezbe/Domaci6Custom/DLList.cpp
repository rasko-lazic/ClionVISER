//
// Created by rasko-lazic on 4/26/2016.
//

#include "DLList.h"
#include <iostream>

using namespace std;

string DLList::getElement(int search) {
    listElement* iter;
    if(this->checkIfOverHalf(search)) {
        iter = last;
    } else {
        iter = first;
    }

    while(iter != nullptr) {
        if(iter->index == search) {
            return iter->value;
        }

        if(this->checkIfOverHalf(search)) {
            iter = iter->previous;
        } else {
            iter = iter->next;
        }
    }

    return "No such element.";
}

void DLList::setElement(string str) {
    listElement* e = new listElement;
    e->value = str;
    e->next = nullptr;

    if(first == nullptr) {
        e->index = 0;
        first = e;
    } else {
        e->index = last->index + 1;
        e->previous = last;
        last->next = e;
    }

    last = e;
}

void DLList::insertAfter(int search, string fresh) {
    listElement* iter;
    if(this->checkIfOverHalf(search)) {
        iter = last;
    } else {
        iter = first;
    }

    listElement* e = new listElement;
    e->value = fresh;
    e->index = search + 1;

    this->incrementIndex(search);

    while(iter != nullptr) {
        if(iter->index == search) {
            e->previous = iter;
            e->next = iter->next;
            iter->next->previous = e;
            iter->next = e;
            break;
        }

        if(this->checkIfOverHalf(search + 1)) {
            iter = iter->previous;
        } else {
            iter = iter->next;
        }
    }


}

void DLList::incrementIndex(int search) {
    listElement* iter;
    if(this->checkIfOverHalf(search)) {
        iter = last;
    } else {
        iter = first;
    }

    while(iter != nullptr) {
        if(iter->index > search) {
            iter->index++;
        }

        if(this->checkIfOverHalf(search)) {
            iter = iter->previous;
        } else {
            iter = iter->next;
        }
    }
}

void DLList::decrementIndex(int search) {
    listElement* iter;
    if(this->checkIfOverHalf(search)) {
        iter = last;
    } else {
        iter = first;
    }

    while(iter != nullptr) {
        if(iter->index > search) {
            iter->index--;
        }

        if(this->checkIfOverHalf(search)) {
            iter = iter->previous;
        } else {
            iter = iter->next;
        }
    }
}

void DLList::showList() {
    listElement* iter = first;

    while(iter != nullptr) {
        cout << iter->index << " " << iter->value << endl;

        iter = iter->next;
    }
}

void DLList::removeElement(int search) {
    listElement* iter;
    if(this->checkIfOverHalf(search)) {
        iter = last;
    } else {
        iter = first;
    }

    while(iter != nullptr) {
        if(iter->index == search) {
            iter->previous->next = iter->next;
            iter->next->previous = iter->previous;
            break;
        }

        if(this->checkIfOverHalf(search)) {
            iter = iter->previous;
        } else {
            iter = iter->next;
        }
    }

    this->decrementIndex(search);
}

bool DLList::checkIfOverHalf(int search) {
    return search > last->index / 2;
}
