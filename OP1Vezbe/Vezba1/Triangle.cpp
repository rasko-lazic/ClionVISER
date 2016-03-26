//
// Created by rasko-lazic on 3/26/2016.
//

#include "Triangle.h"
#include <math.h>

Triangle::Triangle(int a, int b, int c) {
    this->a = a;
    this->b = b;
    this->c = c;
}

int Triangle::getCirc() {

    return a+b+c;
}

double Triangle::getArea() {

    double p, area;

    p = this->getCirc() / 2.0;
    area = sqrt(p * (p - a) * (p - b) * (p - c));

    return area;
}
