//
// Created by rasko-lazic on 3/29/2016.
//

#ifndef OP1VEZBE_POINTTRIANGLE_H
#define OP1VEZBE_POINTTRIANGLE_H

#include "Point.h"

class PointTriangle {
private:
    Point a, b, c;
    const int id;

public:
    static int idCounter;

    PointTriangle();

    PointTriangle(Point p1, Point p2, Point p3);

    double getArea();

    double getCirc();

    void showTriangle();

    static int checkSameVertices(PointTriangle t1, PointTriangle t2);

    static void getMessage(int counter);
};

#endif //OP1VEZBE_POINTTRIANGLE_H
