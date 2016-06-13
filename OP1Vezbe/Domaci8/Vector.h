//
// Created by rasko-lazic on 5/24/16.
//

#ifndef OP1VEZBE_VECTOR_H
#define OP1VEZBE_VECTOR_H

#include <iostream>

using namespace std;

class Vector {
private:
    int* xCoord;
    int* yCoord;
    int* zCoord;

public:

    Vector() : xCoord(new int (0)), yCoord(new int (0)), zCoord(new int (0)) { }

    Vector(int x, int y, int z) : xCoord(new int (x)), yCoord(new int (y)), zCoord(new int (z)) { }

    Vector(const Vector& value);

    ~Vector();

    bool operator>(const Vector& v1);

    bool operator==(const Vector& v1);

    Vector operator+(const Vector& v1);

    Vector operator-(const Vector& v1);

    Vector operator*(int s);

    friend ostream& operator<<(ostream& out, const Vector& v1);
};

#endif //OP1VEZBE_VECTOR_H
