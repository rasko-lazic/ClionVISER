//
// Created by rasko-lazic on 4/13/16.
//

#include "Cuboid.h"
#include "CuboidArray.h"
#include <iostream>

using namespace std;

CuboidArray::CuboidArray() : arrayMaxLength(3), arrayCurrentLength(0) {
    pointerArray = new Cuboid*[arrayMaxLength];
//    for(int i = 0; i < arrayMaxLength; i++) {
//        pointerArray[i] = nullptr;
//    }
}

CuboidArray::CuboidArray(int length) : arrayMaxLength(length), arrayCurrentLength(0) {
    pointerArray = new Cuboid*[arrayMaxLength];
//    for(int i = 0; i < arrayMaxLength; i++) {
//        pointerArray[i] = nullptr;
//    }
}

bool CuboidArray::isFull() {
    if(arrayMaxLength == arrayCurrentLength) {
        return true;
    } else {
        return false;
    }
}

bool CuboidArray::pushCuboid(Cuboid *cub1) {
    if(this->isFull()) {
        return false;
    } else {
        pointerArray[arrayCurrentLength] = cub1;
        arrayCurrentLength++;

        return true;
    }
}

bool CuboidArray::popCuboid(int index) {
    if(pointerArray[index] != nullptr) {
        for(int i = index; i < arrayCurrentLength; i++) {
            pointerArray[i] = pointerArray[i+1];
        }
        arrayCurrentLength--;
        pointerArray[arrayCurrentLength] = nullptr;
        return true;
    } else {
        return false;
    }
}

double CuboidArray::getTotalArea() {
    double totalArea = 0;
    for(int i = 0; i < arrayCurrentLength; i++) {
        totalArea += pointerArray[i]->getArea();
    }

    return totalArea;
}

double CuboidArray::getTotalVolume() {
    double totalVolume = 0;
    for(int i = 0; i < arrayCurrentLength; i++) {
        totalVolume += pointerArray[i]->getVolume();
    }

    return totalVolume;
}

void CuboidArray::showCuboidArray() {
    for(int i = 0; i < arrayCurrentLength; i++) {
        pointerArray[i]->showCuboid();
        cout << endl;
    }
}