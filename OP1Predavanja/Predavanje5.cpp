//
// Created by rasko-lazic on 3/23/16.
//

#include "Predavanje.h"

using namespace std;

class Complex {
private:
    double real;
    double imaginary;
public:
    Complex() {
        real = 0;
        imaginary = 0;
    }

    Complex(double r, double i) {
        real = r;
        imaginary = i;
    }

    Complex con() {
        Complex number(real, -(imaginary));
        return number;
    }

    void showNumber() {
        cout << "Number is " << this->real;
        if (this->imaginary > 0) {
            cout << "+" << this->imaginary << "i" << endl;
        } else {
            cout << this->imaginary << "i" << endl;
        }
    }
};

class Predavanje5 : public Predavanje {
public:
    int execute() {
        Complex test(3, 2);
        Complex test2;

        test2 = test.con();
        test.showNumber();
        test2.showNumber();

        return 0;
    }
};