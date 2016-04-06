//
// Created by rasko-lazic on 4/3/2016.
//

#include "Car.h"
#include <iostream>

using namespace std;

Car::Car() {
    carBrand = "Opel";
    carWidth = 2.0;
    carLength = 4.0;
}

Car::Car(string brand, float width, float length) {
    carBrand = brand;
    carWidth = width;
    carLength = length;
}

float Car::getArea() {
    return carWidth * carLength;
}

void Car::showCar() {
    cout << carBrand << " [ " << carWidth << ", " << carLength << " ]"  << endl;
}

float Car::getWidth() {
    return carWidth;
}

float Car::getLength() {
    return carLength;
}