//
// Created by rasko-lazic on 3/24/2016.
//

#ifndef OP1PREDAVANJA_COMPLEX_H
#define OP1PREDAVANJA_COMPLEX_H

class Complex {
private:

    double real;
    double imaginary;
public:

    Complex();

    Complex(double r, double i);

    Complex conjugate();

    void showNumber();
};

#endif //OP1PREDAVANJA_COMPLEX_H
