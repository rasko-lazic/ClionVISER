//
// Created by rasko-lazic on 4/3/2016.
//

#include <vector>
#include <iostream>
#include "Airplane.h"

using namespace std;

Airplane::Airplane() {
    for (int i = 0; i < rowCount; i++) {
        for (int j = 0; j < seatCount; j++) {
            allTickets[i][j] = nullptr;
        }
    }
}

bool Airplane::isSeatFree(int row, int seat) {
    if(row < 1 || row > rowCount || seat < 1 || seat > seatCount) {
        cout << "Seat doesn't exist." << endl;
        return false;
    } else {
        if (allTickets[row - 1][seat - 1] == nullptr) {
            return true;
        } else {
            return false;
        }
    }
}

void Airplane::showTotalSold() {
    double totalSum;
    for(int i = 0; i < rowCount; i++) {
        for(int j = 0; j < seatCount; j++) {
            if (allTickets[i][j] != nullptr) {
                totalSum += allTickets[i][j]->getPrice();
            }
        }
    }

    cout << "Total sold tickets: " << totalSum << endl;
}

void Airplane::showAirplane() {
    for(int i = 0; i < rowCount; i++) {
        for(int j = 0; j < seatCount; j++) {
            if (allTickets[i][j] != nullptr) {
                putchar('#');
            } else {
                putchar('-');
            }

            if(j == 2) {
                cout << "   ";
            }
        }
        cout << endl;
    }
}

bool Airplane::sellTicket(Ticket* buyer) {
    if(buyer->getRow() < rowCount) {
        if(buyer->getSeat() < seatCount) {
            if(isSeatFree(buyer->getRow(), buyer->getSeat())) {
                allTickets[buyer->getRow()][buyer->getSeat()] = buyer;
                cout << "You've successfully purchased a seat." << endl;

                return true;
            } else {
                cout << "Sorry, that seat is taken" << endl;

                return false;
            }
        } else {
            cout << "Sorry that seat doesn't exist." << endl;

            return  false;
        }
    } else {
        cout << "Sorry that row doesn't exist" << endl;

        return false;
    }
}

