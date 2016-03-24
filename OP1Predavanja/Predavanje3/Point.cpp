//
// Created by rasko-lazic on 3/24/2016.
//

#include "Point.h"
#include <math.h>
#include <stdlib.h>

void Point::randomize() {
    x = ((double) rand() / (RAND_MAX));
    y = ((double) rand() / (RAND_MAX));
}

double Point::distance() {
    return sqrt(pow(this->x, 2)+pow(this->y, 2));
}