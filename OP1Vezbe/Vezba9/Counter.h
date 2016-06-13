//
// Created by rasko-lazic on 6/13/2016.
//

#ifndef OP1VEZBE_COUNTER_H
#define OP1VEZBE_COUNTER_H

#include <iostream>

using namespace std;

class Counter {
private:
    int* count;

public:

    Counter() : count(new int(5)) { }

    Counter(const Counter& value);

    Counter(Counter&& value);

    ~Counter();

    void incrementCounter();

    void decrementCounter();

    void doubleCounter();

    friend ostream& operator<<(ostream& out, const Counter value);
};

#endif //OP1VEZBE_COUNTER_H
