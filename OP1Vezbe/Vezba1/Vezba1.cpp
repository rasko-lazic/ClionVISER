//
// Created by rasko-lazic on 3/19/16.
//

#include "../Vezbe.h"
#include "Triangle.h"
#include "Vezba1.h"
#include <iostream>

using namespace std;

int Vezba1::execute() {

    int sides[3], i;

    for (i = 0; i < 3; i++) {
        cout << "Please enter the length of the " << i + 1 << ". side: " << endl;
        cin >> sides[i];
    }

    Triangle newTriangle(sides[0], sides[1], sides[2]);

    cout << "The circumference of the given triangle is: " << newTriangle.getCirc() << endl;
    cout << "The area of the given triangle is: " << newTriangle.getArea() << endl;
}