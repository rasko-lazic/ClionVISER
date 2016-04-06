//
// Created by rasko-lazic on 4/3/2016.
//

#ifndef OP1VEZBE_CAR_H
#define OP1VEZBE_CAR_H

#include <string>

using namespace std;

class Car {
private:
    string carBrand;
    float carWidth;
    float carLength;

public:

    Car();

    Car(string brand, float width, float length);

    float getArea();

    void showCar();

    float getWidth();

    float getLength();
};

#endif //OP1VEZBE_CAR_H
