//
// Created by rasko-lazic on 6/12/2016.
//

#include "Vezba10.h"
#include "ComplexNumber.h"

int Vezba10::execute() {
    ComplexNumber c1(3, 5);
    ComplexNumber c2 = c1;

    cout << "Original: " << c1;
    cout << "Copy: " << c2;

    ComplexNumber c3 = ~c1;

    cout << "Conjugate: " << c3;

    c1 = c2 + c3;

    cout << "Addition: " << c1;

    c1 = c1 - c3;

    cout << "Subtraction: " << c1;

    return 0;
}
