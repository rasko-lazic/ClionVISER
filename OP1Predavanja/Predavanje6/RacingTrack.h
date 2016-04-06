//
// Created by rasko-lazic on 4/6/16.
//

#ifndef OP1PREDAVANJA_RACINGTRACK_H
#define OP1PREDAVANJA_RACINGTRACK_H

#include "Racer.h"

class RacingTrack {
private:
    int slots;
    int length;
    Racer *racersArray;

public:
    RacingTrack();

    void generateRacers();

    void showTrack();
};

#endif //OP1PREDAVANJA_RACINGTRACK_H
