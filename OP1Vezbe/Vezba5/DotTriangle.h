//
// Created by rasko-lazic on 4/14/16.
//

#ifndef OP1VEZBE_DOTTRIANGLE_H
#define OP1VEZBE_DOTTRIANGLE_H

#include "Dot.h"

class DotTriangle {
private:
    Dot a, b, c;

public:
    static int idCounter;

    DotTriangle();

    DotTriangle(Dot p1, Dot p2, Dot p3);

    double getArea();

    double getCirc();

    void showTriangle();


};

#endif //OP1VEZBE_DOTTRIANGLE_H
