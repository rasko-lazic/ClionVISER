//
// Created by rasko-lazic on 3/19/16.
//

#include "Vezbe.h"
#include <iostream>
#include <math.h>

using namespace std;

class Triangle {
private:
    int a, b, c;
public:
    Triangle(int a, int b, int c) {
        this->a = a;
        this->b = b;
        this->c = c;
    }

    int getCirc() {

        return a+b+c;
    }

    double getArea() {

        double p, area;

        p = this->getCirc() / 2.0;
        area = sqrt(p * (p - a) * (p - b) * (p - c));

        return area;
    }
};

class Vezba1: public Vezba {
public:
    int execute() {

        int sides[3], i;

        for (i = 0; i < 3; i++) {
            cout << "Please enter the length of the " << i + 1 << ". side: " << endl;
            cin >> sides[i];
        }

        Triangle newTriangle(sides[0], sides[1], sides[2]);

        cout << "The circumference of the given triangle is: " << newTriangle.getCirc() << endl;
        cout << "The area of the given triangle is: " << newTriangle.getArea() << endl;
    }
};