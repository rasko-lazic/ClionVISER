//
// Created by rasko-lazic on 5/24/16.
//

#include "Vector.h"
#include <math.h>

Vector::Vector(const Vector &value) {
    xCoord = value.xCoord;
    yCoord = value.yCoord;
    zCoord = value.zCoord;
}

Vector::~Vector() {
    xCoord = nullptr;
    yCoord = nullptr;
    zCoord = nullptr;
}

bool Vector::operator>(const Vector& v1) {
    double i1 = sqrt(*(v1.xCoord) * *(v1.xCoord) + *(v1.yCoord) * *(v1.yCoord) + *(v1.zCoord) * *(v1.zCoord));
    double i2 = sqrt(*(this->xCoord) * *(this->xCoord) + *(this->yCoord) * *(this->yCoord) + *(this->zCoord) * *(this->zCoord));

    return i1 > i2;
}

bool Vector::operator==(const Vector& v1) {
    double i1 = sqrt(*(v1.xCoord) * *(v1.xCoord) + *(v1.yCoord) * *(v1.yCoord) + *(v1.zCoord) * *(v1.zCoord));
    double i2 = sqrt(*(this->xCoord) * *(this->xCoord) + *(this->yCoord) * *(this->yCoord) + *(this->zCoord) * *(this->zCoord));

    return i1 == i2;
}

Vector Vector::operator+(const Vector& v1) {
    Vector result(*(v1.xCoord) + *(this->xCoord), *(v1.yCoord) + *(this->yCoord), *(v1.zCoord) + *(this->zCoord));

    return result;
}

Vector Vector::operator-(const Vector& v1) {
    Vector result(*(v1.xCoord) - *(this->xCoord), *(v1.yCoord) - *(this->yCoord), *(v1.zCoord) - *(this->zCoord));

    return result;
}

Vector Vector::operator*(int s) {
    Vector result(*(this->xCoord) * s, *(this->yCoord) * s, *(this->zCoord) * s);

    return result;
}

ostream& operator<<(ostream &out, const Vector& v1) {
    return out << "(" << *(v1.xCoord) << ", " << *(v1.yCoord) << ", " << *(v1.zCoord) << ")" << endl;
}
