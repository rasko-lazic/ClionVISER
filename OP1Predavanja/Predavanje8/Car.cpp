//
// Created by rasko-lazic on 4/20/16.
//

#include "Car.h"
#include <iostream>
#include <string>

using namespace std;

Car::Car() {
    string brand;
    int price;
    cout << "Enter car brand: ";
    cin >> brand;

    cout << "Enter car price: ";
    cin >> price;

    carBrand = brand;
    carPrice = price;
}