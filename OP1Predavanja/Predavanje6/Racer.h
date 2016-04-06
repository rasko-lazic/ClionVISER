//
// Created by rasko-lazic on 4/6/16.
//

#ifndef OP1PREDAVANJA_RACER_H
#define OP1PREDAVANJA_RACER_H

#include "RacingTrack.h"

class Racer {
private:
    int xCoord;
    int yCoord;

public:
    static int counter = 0;

    Racer();

    void showRacer();
};
#endif //OP1PREDAVANJA_RACER_H
