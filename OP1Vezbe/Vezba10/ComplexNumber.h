//
// Created by rasko-lazic on 6/12/2016.
//

#ifndef OP1VEZBE_COMPLEXNUMBER_H
#define OP1VEZBE_COMPLEXNUMBER_H

#include <iostream>

using namespace std;

class ComplexNumber {
private:
    double* real;
    double* imaginary;

public:

    ComplexNumber() : real(new double(0)), imaginary(new double(0)) { }

    ComplexNumber(double r, double i) : real(new double(r)), imaginary(new double(i)) { }

    ~ComplexNumber();

    ComplexNumber(const ComplexNumber &value);

    ComplexNumber operator~();

    ComplexNumber operator+(const ComplexNumber &c1);

    ComplexNumber operator-(const ComplexNumber &c1);

    friend ostream& operator<<(ostream& out, const ComplexNumber c1);
};

#endif //OP1VEZBE_COMPLEXNUMBER_H
