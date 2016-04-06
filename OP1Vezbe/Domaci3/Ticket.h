//
// Created by rasko-lazic on 4/3/2016.
//

#ifndef OP1VEZBE_TICKET_H
#define OP1VEZBE_TICKET_H

class Ticket {
private:
    int ticketRow;
    int ticketSeat;
    double ticketPrice;
public:
    const int rowCount=30;
    const int seatCount=6;

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
