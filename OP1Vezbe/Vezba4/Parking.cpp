//
// Created by rasko-lazic on 4/3/2016.
//

#include "Parking.h"
#include <iostream>

using namespace std;

Parking::Parking() {
    spaceWidth = 2.5;
    spaceLength = 4.0;
    occupant = nullptr;
}

bool Parking::isFree() {
    if(occupant != nullptr) {
        return false;
    } else {
        return true;
    }
}

bool Parking::park(Car *parkingCar) {
    if(this->isFree()) {
        if(parkingCar->getWidth() <= spaceWidth && parkingCar->getLength() <= spaceLength) {
            occupant = parkingCar;
            return true;
        } else {
            cout << endl << "The car is too big." << endl;
            return false;
        }
    } else {
        cout << endl << "The space is occupied." << endl;
        return false;
    }
}

void Parking::removeCar() {
    occupant = nullptr;
}

void Parking::showParking() {
    if(occupant == nullptr) {
        cout << "( " << spaceWidth << ", " << spaceLength << " )" << endl;
    } else {
        occupant->showCar();
        cout << "( " << spaceWidth << ", " << spaceLength << " )" << endl;
    }
}
