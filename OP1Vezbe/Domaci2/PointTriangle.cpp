//
// Created by rasko-lazic on 3/30/2016.
//

#include "PointTriangle.h"
#include <iostream>
#include <math.h>

using namespace std;

int PointTriangle::idCounter = 1;

PointTriangle::PointTriangle(): id(idCounter++) {
    Point defaultA(0,0), defaultB(0,4), defaultC(4,3);

    a = defaultA;
    b = defaultB;
    c = defaultC;
}

PointTriangle::PointTriangle(Point p1, Point p2, Point p3): id(idCounter++) {
    a = p1;
    b = p2;
    c = p3;
}

double PointTriangle::getCirc() {

    return Point::getDistance(a, b) + Point::getDistance(b, c) + Point::getDistance(a, c);
}

double PointTriangle::getArea() {
    double halfCirc;

    halfCirc = getCirc() / 2.0;
    return sqrt(halfCirc * (halfCirc - Point::getDistance(a, b)) * (halfCirc - Point::getDistance(b, c)) * (halfCirc - Point::getDistance(a, c)));
}

void PointTriangle::showTriangle() {
    cout << "Triangle" << id << "(";
    a.showPoint();
    b.showPoint();
    c.showPoint();
    cout << ")";
}

void PointTriangle::getMessage(int counter) {
    switch (counter) {
        case 0:
            cout << " have no shared vertices." << endl;
            break;
        case 1:
            cout << " have one shared vertex." << endl;
            break;
        case 2:
            cout << " have a shared side." << endl;
            break;
        case 3:
            cout << " are identical." << endl;
            break;
    }
}

int PointTriangle::checkSameVertices(PointTriangle t1, PointTriangle t2) {
    int counter = 0;
    if(Point::checkIfSame(t1.a, t2.a) || Point::checkIfSame(t1.a, t2.b) || Point::checkIfSame(t1.a, t2.c)) {
        counter++;
    }
    if(Point::checkIfSame(t1.b, t2.a) || Point::checkIfSame(t1.b, t2.b) || Point::checkIfSame(t1.b, t2.c)) {
        counter++;
    }
    if(Point::checkIfSame(t1.c, t2.a) || Point::checkIfSame(t1.c, t2.b) || Point::checkIfSame(t1.c, t2.c)) {
        counter++;
    }

    t1.showTriangle();
    cout << " and " << endl;
    t2.showTriangle();
    PointTriangle::getMessage(counter);
}