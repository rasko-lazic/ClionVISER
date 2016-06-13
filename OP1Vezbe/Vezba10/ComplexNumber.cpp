//
// Created by rasko-lazic on 6/12/2016.
//

#include "ComplexNumber.h"

ComplexNumber::~ComplexNumber() {
    real = nullptr;
    imaginary = nullptr;
}

ComplexNumber::ComplexNumber(const ComplexNumber &value) {
    real = value.real;
    imaginary = value.imaginary;
}

ComplexNumber ComplexNumber::operator~() {
    ComplexNumber result(*this->real, -*this->imaginary);

    return result;
}

ComplexNumber ComplexNumber::operator+(const ComplexNumber &c1) {
    ComplexNumber result(*this->real + *c1.real, *this->imaginary + *c1.imaginary);

    return result;
}

ComplexNumber ComplexNumber::operator-(const ComplexNumber &c1) {
    ComplexNumber result(*this->real - *c1.real, *this->imaginary - *c1.imaginary);

    return result;
}

ostream& operator<<(ostream& out, const ComplexNumber c1) {

    return out << "( " << *c1.real << ", " << *c1.imaginary << " )" << endl;
}