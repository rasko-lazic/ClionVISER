//
// Created by rasko-lazic on 4/25/2016.
//

#ifndef OP1VEZBE_STACK_H
#define OP1VEZBE_STACK_H

#include <queue>

using namespace std;

class Stack {
private:
    queue <int> intStack;
    int stackLength;

public:

    Stack(int length) : stackLength(length) { }

    void pushStack(int value);

    int popStack();

    void showStack();
};

#endif //OP1VEZBE_STACK_H
