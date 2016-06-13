//
// Created by rasko-lazic on 5/24/16.
//

#include "Domaci8.h"
#include "Vector.h"

int Domaci8::execute() {
    Vector v1(2, 8, 5);
    Vector v2(1, 1, 1);

    cout << "Vector1: ";
    cout << v1;
    cout << "Vector2: ";
    cout << v2;

    if(v1 > v2) {
        cout << "V1 is greater than V2." << endl;
    }

    Vector v3 = v1 + v2;
    cout << "Vector1 + Vector2: ";
    cout << v3;

    Vector v4 = v3 - v1;
    cout << "Vector4: ";
    cout << v4;

    if(v4 == v2) {
        cout << "V4 equals V2." << endl;
    }

    v1 = v4 * 2;
    cout << "Vector4 * 2: ";
    cout << v1;

    return 0;
}