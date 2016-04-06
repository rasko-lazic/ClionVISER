//
// Created by rasko-lazic on 4/3/2016.
//

#include <stdint.h>
#include "Airplane.h"

Airplane::Airplane(int rows, int seats) {
    rowCount = rows;
    seatCount = seats;
    allTickets = new Ticket* [rowCount];

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < seats; j++) {
            allTickets[i][j] = nullptr;
        }
    }
}

