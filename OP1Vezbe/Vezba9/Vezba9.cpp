//
// Created by rasko-lazic on 6/13/2016.
//

#include "Vezba9.h"
#include "Complex.h"
#include "Counter.h"

int Vezba9::execute() {
    Complex* c1 = new Complex;
    Complex* c2 = new Complex(3, 8);

    cout << *c1;
    cout << *c2;

    Complex* c3 = c2;

    cout << *c3;

    Counter* original = new Counter;

    Counter copy = *original;

    copy.incrementCounter();
    copy.doubleCounter();
    copy.decrementCounter();
    copy.decrementCounter();

    cout << *original;
    cout << copy;

    return 0;
}