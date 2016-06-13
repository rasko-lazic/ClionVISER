//
// Created by rasko-lazic on 6/12/2016.
//

#include "UnlimitedStack.h"
#include <iostream>

using  namespace std;

UnlimitedStack::UnlimitedStack() {
    ustackCount = 0;
    first = nullptr;
    last = nullptr;
}

int UnlimitedStack::getUstackCount() {
    return ustackCount;
}

void UnlimitedStack::UstackPush(int value) {
    ustackCount++;
    ustackElement* el = new ustackElement;
    el->value = new int (value);
    el->next = nullptr;
    if(first == nullptr) {
        first = el;
    } else {
        last->next = el;
    }

    last = el;
}

int UnlimitedStack::UstackPop() {
    int value = 0;
    if(last != nullptr) {
        value = *last->value;
    }

    ustackElement* el = first;
    for(int i = 2; i < ustackCount; i++) {
        el = el->next;
    }

    delete last;
    last = el;
    ustackCount--;

    return value;
}

void UnlimitedStack::showUstack() {
    ustackElement* el = first;
    cout << "Unlimited stack: " << endl;
    while(el != nullptr) {
        cout << *el->value << endl;
        el = el->next;
    }
}