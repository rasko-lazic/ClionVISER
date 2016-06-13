//
// Created by rasko-lazic on 6/13/2016.
//

#ifndef OP1VEZBE_COMPLEX_H
#define OP1VEZBE_COMPLEX_H

#include <iostream>

using namespace std;

class Complex {
private:
    double real;
    double imaginary;

public:

    Complex() : real(5), imaginary(-5) { }

    Complex(double r, double i) : real(r), imaginary(i) { }

    Complex(const Complex &c);

    Complex(Complex &&c);

    friend ostream& operator<<(ostream& out, const Complex c);
};

#endif //OP1VEZBE_COMPLEX_H
