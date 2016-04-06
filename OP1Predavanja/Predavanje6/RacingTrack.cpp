//
// Created by rasko-lazic on 4/6/16.
//

#include "RacingTrack.h"
#include "Racer.h"

RacingTrack::RacingTrack() {
    slots = 6;
    length = 40;
    racersArray = nullptr;
}

void RacingTrack::showTrack() {
    for(int i = 0; i < slots; i++) {
        racersArray[i].showRacer;
    }
}

void RacingTrack::generateRacers() {
    racersArray =  new Racer[slots];
}
