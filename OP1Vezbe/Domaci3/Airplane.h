//
// Created by rasko-lazic on 4/3/2016.
//

#ifndef OP1VEZBE_AIRPLANE_H
#define OP1VEZBE_AIRPLANE_H

#include "Ticket.h"

using namespace std;

class Airplane {
private:
    Ticket *allTickets[rowCount][seatCount];
public:

    Airplane();

    bool isSeatFree(int row, int seat);

    void showTotalSold();

    bool sellTicket(Ticket* buyer);

    void showAirplane();
};
#endif //OP1VEZBE_AIRPLANE_H
