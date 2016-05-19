//
// Created by rasko-lazic on 3/30/2016.
//

#include "Domaci2.h"
#include "PointTriangle.h"
#include <iostream>

using namespace std;

int Domaci2::execute(void) {
    PointTriangle t1;

    Point p1(3, 2), p2(4, 0), p3(8, 2);
    PointTriangle t2(p1, p2, p3);

    cout << "Curcimference of first triangle is: "<< t1.getCirc() << endl;

    cout << "Area of first triangle is: "<< t1.getArea() << endl;

    PointTriangle::checkSameVertices(t1,t2);

    return 0;
}
