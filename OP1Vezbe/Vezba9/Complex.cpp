//
// Created by rasko-lazic on 6/13/2016.
//

#include "Complex.h"

Complex::Complex(const Complex &c) {
    real = c.real;
    imaginary = c.imaginary;
}

Complex::Complex(Complex &&c) {
    real = c.real;
    imaginary = c.imaginary;
}

ostream& operator<<(ostream &out, const Complex c) {
    return out << "( " << c.real << ", " << c.imaginary << " )" << endl;
}

