//
// Created by rasko-lazic on 6/13/2016.
//

#include "Counter.h"

Counter::Counter(const Counter &value) {
    count = new int(*value.count);
}

Counter::Counter(Counter &&value) {
    count = value.count;
    value.count = nullptr;
}

Counter::~Counter() {
    delete this->count;
}

void Counter::incrementCounter() {
    (*count)++;
}

void Counter::decrementCounter() {
    (*count)--;
}

void Counter::doubleCounter() {
    *count *= 2;
}

ostream& operator<<(ostream &out, const Counter value) {
    return out << "Counter value is: " << *value.count << endl;
}