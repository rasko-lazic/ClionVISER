//
// Created by rasko-lazic on 4/3/2016.
//

#include "Vezba4.h"
#include "Parking.h"

int Vezba4::execute() {
    Parking* parkingRow = new Parking[5];

    for(int i = 0; i < 5; i++) {
        parkingRow[i].showParking();
    }

    Car opel, meckica("Mercedes", 1.8, 2.3), x5("BMW", 3.0, 5.0);

    parkingRow[0].park(&opel);
    parkingRow[1].park(&meckica);
    parkingRow[2].park(&x5);

    for(int i = 0; i < 5; i++) {
        parkingRow[i].showParking();
    }

    parkingRow[0].removeCar();

    for(int i = 0; i < 5; i++) {
        parkingRow[i].showParking();
    }
}
