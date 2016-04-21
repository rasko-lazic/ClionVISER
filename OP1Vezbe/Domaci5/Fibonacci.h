//
// Created by rasko-lazic on 4/20/16.
//

#ifndef OP1VEZBE_FIBONACCI_H
#define OP1VEZBE_FIBONACCI_H

class Fibonacci {
public:
    int arrayLength;

    Fibonacci(int length) : arrayLength(length) { }

    int arraySum();

    int *getArray();

    int getForIndex(int index);

    void showArray();

};

#endif //OP1VEZBE_FIBONACCI_H
