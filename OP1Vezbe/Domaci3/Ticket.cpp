//
// Created by rasko-lazic on 4/3/2016.
//

#include "Ticket.h"
#include <iostream>

using  namespace std;

Ticket::Ticket(int row, int seat, double price) {
    ticketRow = row;
    ticketSeat = seat;
    ticketPrice = price;
}

int Ticket::setRow(int row) {
    if(row >= 1 && row <= rowCount) {
        ticketRow = row;
        return 0;
    } else {
        return 1;
    }
}

int Ticket::setSeat(int seat) {
    if(seat >= 1 && seat <= seatCount) {
        ticketSeat = seat;
        return 0;
    } else {
        return 1;
    }
}

void Ticket::setPrice(double price) {
    ticketPrice = price;
}

int Ticket::getRow() {
    return ticketRow;
}

int Ticket::getSeat() {
    return ticketSeat;
}

double Ticket::getPrice() {
    return ticketPrice;
}

void Ticket::showTicket() {
    cout << "Ticket row: " << ticketRow << endl;
    cout << "Ticket seat: " << ticketSeat << endl;
    cout << "Ticket price: " << ticketPrice << endl;
}