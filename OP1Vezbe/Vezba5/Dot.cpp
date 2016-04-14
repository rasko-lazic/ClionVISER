//
// Created by rasko-lazic on 4/14/2016.
//

#include "Dot.h"
#include <iostream>
#include <math.h>

using namespace std;

Dot::Dot(int x, int y) : xCoord(x), yCoord(y) { }

Dot::Dot() : xCoord(0), yCoord(0) { }

double Dot::getDistance(Dot p1, Dot p2) {
    int xDiff, yDiff;
    xDiff = p1.xCoord - p2.xCoord;
    yDiff = p1.yCoord - p2.yCoord;
    return sqrt(pow(xDiff, 2) + pow(yDiff, 2));
}

void Dot::showDot() {
    cout << "(" << xCoord << "," << yCoord << ")";
}

int Dot::getX() {
    return xCoord;
}

int Dot::getY() {
    return yCoord;
}

bool Dot::checkIfColinear(Dot p1, Dot p2, Dot p3) {
    if((p2.getY() - p1.getY()) * (p3.getX() - p2.getX()) == ((p3.getY() - p1.getX()) * (p2.getX() - p1.getX()))) {
        return true;
    } else {
        return false;
    }
}

