//
// Created by rasko-lazic on 4/13/16.
//

#ifndef OP1VEZBE_CUBOIDARRAY_H
#define OP1VEZBE_CUBOIDARRAY_H

#include "Cuboid.h"

class CuboidArray{
private:
    int arrayMaxLength;
    int arrayCurrentLength;
    Cuboid **pointerArray;
public:

    CuboidArray();

    CuboidArray(int length);

    bool isFull();

    bool pushCuboid(Cuboid *cub1);

    bool popCuboid(int index);

    double getTotalArea();

    double getTotalVolume();

    void showCuboidArray();

};

#endif //OP1VEZBE_CUBOIDARRAY_H
