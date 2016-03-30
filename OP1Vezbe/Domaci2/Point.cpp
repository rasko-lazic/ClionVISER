//
// Created by rasko-lazic on 3/29/2016.
//

#include "Point.h"
#include <math.h>
#include <iostream>

using namespace std;

Point::Point(int x, int y) {
    xCoords = x;
    yCoords = y;
}

Point::Point() {
    xCoords = 0;
    yCoords = 0;
}

double Point::getDistance(Point p1, Point p2) {
    int xDiff, yDiff;
    xDiff = p1.xCoords - p2.xCoords;
    yDiff = p1.yCoords - p2.yCoords;
    return sqrt(pow(xDiff, 2) + pow(yDiff, 2));
}

void Point::showPoint() {
    cout << "(" << xCoords << "," << yCoords << ")";
}

bool Point::checkIfSame(Point p1, Point p2) {
    if(p1.xCoords == p2.xCoords && p1.yCoords == p2.yCoords) {
        return true;
    } else {
        return false;
    }
}