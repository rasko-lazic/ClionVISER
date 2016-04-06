//
// Created by rasko-lazic on 4/6/16.
//

#include "Racer.h"
#include <iostream>

using namespace std;

Racer::Racer() {
    xCoord = 0;
    yCoord = counter++;
}

void Racer::showRacer() {
    for(int i = 0; i <= xCoord; i++) {
        cout << racerMark;
    }
}