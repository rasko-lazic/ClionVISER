//
// Created by rasko-lazic on 4/3/2016.
//

#ifndef OP1VEZBE_TICKET_H
#define OP1VEZBE_TICKET_H

const int rowCount=25;
const int seatCount=6;

class Ticket {
private:
    int ticketRow;
    int ticketSeat;
    double ticketPrice;

public:

    Ticket(int row, int seat, double price);

    int setRow(int row);

    int setSeat(int seat);

    void setPrice(double price);

    int getRow();

    int getSeat();

    double getPrice();

    void showTicket();
};
#endif //OP1VEZBE_TICKET_H
