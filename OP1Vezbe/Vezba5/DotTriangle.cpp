//
// Created by rasko-lazic on 4/14/16.
//

#include "DotTriangle.h"
#include <iostream>
#include <math.h>

using namespace std;

DotTriangle::DotTriangle() {
    Dot defaultA(0,0), defaultB(0,4), defaultC(4,3);

    a = defaultA;
    b = defaultB;
    c = defaultC;
}

DotTriangle::DotTriangle(Dot p1, Dot p2, Dot p3) : a(p1), b(p2), c(p3) { }

double DotTriangle::getCirc() {

    return Dot::getDistance(a, b) + Dot::getDistance(b, c) + Dot::getDistance(a, c);
}

double DotTriangle::getArea() {
    double halfCirc;

    halfCirc = getCirc() / 2.0;
    return sqrt(halfCirc * (halfCirc - Dot::getDistance(a, b)) * (halfCirc - Dot::getDistance(b, c)) * (halfCirc - Dot::getDistance(a, c)));
}

void DotTriangle::showTriangle() {
    cout << "Triangle (";
    a.showDot();
    b.showDot();
    c.showDot();
    cout << ")";
}



