//
// Created by rasko-lazic on 6/12/2016.
//

#include "LimitedStack.h"
#include <iostream>

using namespace std;

LimitedStack::LimitedStack() {
    lstackLength = 5;
    lstackCount = 0;
    lstack = new int*[5];

    for(int i = 0; i < lstackLength; i++) {
        lstack[i] = nullptr;
    }
}

LimitedStack::LimitedStack(int length) {
    lstackLength = length;
    lstackCount = 0;
    lstack = new int*[length];

    for(int i = 0; i < lstackLength; i++) {
        lstack[i] = nullptr;
    }
}

int LimitedStack::getLstackCount() {
    return lstackCount;
}

void LimitedStack::LstackPush(int value) {
    if(lstackCount  < lstackLength) {
        lstack[lstackCount] = new int (value);
        lstackCount++;
    }
}

int LimitedStack::LstackPop() {
    lstackCount--;
    int value = *lstack[lstackCount];
    lstack[lstackCount] = nullptr;

    return value;
}

void LimitedStack::showLstack() {
    cout << "Limited stack" << endl;
    for(int i = 0; i < lstackLength; i++) {
        if(lstack[i] != nullptr) {
            cout << *lstack[i] << endl;
        }
    }
}

