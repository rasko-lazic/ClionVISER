//
// Created by rasko-lazic on 3/24/2016.
//

#include "Complex.h"
#include <iostream>

using namespace std;

Complex::Complex() {
    real = 0;
    imaginary = 0;
}

Complex::Complex(double r, double i) {
    real = r;
    imaginary = i;
}

Complex Complex::conjugate() {
    Complex number(real, -(imaginary));
    return number;
}

void Complex::showNumber() {
    cout << "Number is " << this->real;
    if (this->imaginary > 0) {
        cout << "+" << this->imaginary << "i" << endl;
    } else {
        cout << this->imaginary << "i" << endl;
    }
}