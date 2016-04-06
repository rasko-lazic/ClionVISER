//
// Created by rasko-lazic on 4/6/16.
//

#include "Domaci3.h"
#include "Ticket.h"
#include "Airplane.h"

int Domaci3::execute() {
    Airplane AS38;
    AS38.showAirplane();

    Ticket ticket1(12, 3, 114.2);
    Ticket ticket2(4, 4, 126.2);

    AS38.sellTicket(&ticket1);
    AS38.sellTicket(&ticket2);

    AS38.showAirplane();
}