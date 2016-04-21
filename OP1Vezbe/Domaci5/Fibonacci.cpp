//
// Created by rasko-lazic on 4/20/16.
//

#include "Fibonacci.h"
#include <iostream>

using namespace std;

int Fibonacci::arraySum() {
    int* fibonacciArray = this->getArray();
    int sum = 0;

    for(int i = 0; i < arrayLength; i++) {
        sum += fibonacciArray[i];
    }

    return sum;
}

int *Fibonacci::getArray() {
    int* returnArray = new int[arrayLength];

    for (int i = 1; i <= arrayLength; i++) {
        returnArray[i - 1] = getForIndex(i);
    }

    return returnArray;
}

int Fibonacci::getForIndex(int index) {
    return index < 2 ? index : getForIndex(index - 1) + getForIndex(index - 2);
}

void Fibonacci::showArray() {
    int* fibonacciArray = this->getArray();

    for(int i = 0; i < arrayLength; i++) {
        cout << fibonacciArray[i] << endl;
    }
}
