//
// Created by rasko-lazic on 4/25/2016.
//

#include "Stack.h"
#include <iostream>

void Stack::pushStack(int value) {
    if(intStack.size() >= stackLength) {
        intStack.pop();
        intStack.push(value);
    } else {
        intStack.push(value);
    }
}

int Stack::popStack() {
    int value = intStack.front();
    intStack.pop();

    return value;
}

void Stack::showStack() {
    cout << "\n\nCurrent stack content: ";
    for(int i = 0; i < intStack.size(); i++) {
        int value = intStack.front();
        cout << value << ",";

        intStack.pop();
        intStack.push(value);
    }
}