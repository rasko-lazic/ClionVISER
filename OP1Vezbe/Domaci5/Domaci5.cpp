//
// Created by rasko-lazic on 4/20/16.
//

#include "Domaci5.h"
#include "Fibonacci.h"
#include <iostream>

using namespace std;

int Domaci5::execute() {
    Fibonacci fib1(5), fib2(10);

    cout << "First Fibonacci array: " << endl;
    fib1.showArray();
    cout << "Sum: " << fib1.arraySum() << endl;

    cout << "\n\nSecond Fibonacci array: " << endl;
    fib2.showArray();
    cout << "Sum: " << fib2.arraySum() << endl;

    return 0;
}