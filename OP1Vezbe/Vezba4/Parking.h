//
// Created by rasko-lazic on 4/3/2016.
//

#ifndef OP1VEZBE_PARKING_H
#define OP1VEZBE_PARKING_H

#include "Car.h"

class Parking {
private:
    float spaceWidth;
    float spaceLength;
    Car* occupant;

public:

    Parking();

    bool isFree();

    bool park(Car* parkingCar);

    void removeCar();

    void showParking();
};
#endif //OP1VEZBE_PARKING_H
