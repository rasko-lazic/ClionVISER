//
// Created by rasko-lazic on 4/14/16.
//

#include "Vezba5.h"
#include "DotTriangle.h"
#include <iostream>

using namespace std;

void showTriangleArray(DotTriangle array[], int arrayCount) {
    for(int i = 0; i < arrayCount; i++) {
        array[i].showTriangle();
        cout << endl << "Triangle area is: " << array[i].getArea() << endl;
    }
}

int Vezba5::execute() {
    Dot a1(7, 2), a2(3, 10), a3(4, 1);
    Dot b1(2, 4), b2(-3, 3), b3(3, -1);
    Dot c1(3, 12), c2(4, 7), c3(7, 6);

    DotTriangle t1, t2(a1, a2, a3), t3(b1, b2, b3), t4(c1, c2, c3), helper;

    DotTriangle triangleArray[4];

    triangleArray[0] = t1;
    triangleArray[1] = t2;
    triangleArray[2] = t3;
    triangleArray[3] = t4;

    cout << "\nBefore sort\n\n";
    showTriangleArray(triangleArray, 4);

    for(int i = 0; i < 3; i++) {
        for(int j = i+1; j < 4; j++) {
            if(triangleArray[i].getArea() > triangleArray[j].getArea()) {
                helper = triangleArray[i];
                triangleArray[i] = triangleArray[j];
                triangleArray[j] = helper;
            }
        }
    }

    cout << "\nAfter sort:\n\n";
    showTriangleArray(triangleArray, 4);

    return 0;
}