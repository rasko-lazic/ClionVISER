//
// Created by rasko-lazic on 4/13/16.
//

#include "Cuboid.h"
#include <iostream>

using namespace std;

Cuboid::Cuboid() : cuboidWidth(4.0), cuboidHeight(2.0), cuboidLength(2.0) { }

Cuboid::Cuboid(double width, double height, double length): cuboidHeight(height), cuboidLength(length), cuboidWidth(width) {}

double Cuboid::getWidth() {
    return cuboidWidth;
}

double Cuboid::getLength() {
    return cuboidLength;
}

double Cuboid::getHeight() {
    return cuboidHeight;
}

void Cuboid::setWidth(double value) {
    cuboidWidth = value;
}

void Cuboid::setLength(double value) {
    cuboidLength = value;
}

void Cuboid::setHeight(double value) {
    cuboidHeight = value;
}

double Cuboid::getArea() {
    double a = cuboidHeight;
    double b = cuboidLength;
    double c = cuboidWidth;

    return 2 * (a * b + a * c + b * c);
}

double Cuboid::getVolume() {
    return cuboidLength * cuboidWidth * cuboidHeight;
}

void Cuboid::showCuboid() {
    cout << "Cuboid { " << cuboidWidth << ", " << cuboidLength << ", " << cuboidHeight << " }";

}
