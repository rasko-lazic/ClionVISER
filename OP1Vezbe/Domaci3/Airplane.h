//
// Created by rasko-lazic on 4/3/2016.
//

#ifndef OP1VEZBE_AIRPLANE_H
#define OP1VEZBE_AIRPLANE_H

#include "Ticket.h"

class Airplane {
private:
    int rowCount;
    int seatCount;
    Ticket** allTickets;
public:

    Airplane(int rows, int seats);

    bool isSeatFree();

    double totalSold();

    void showSold();

    bool sellSeat();

    Ticket getSeat();

    void showAirplane();
};
#endif //OP1VEZBE_AIRPLANE_H
