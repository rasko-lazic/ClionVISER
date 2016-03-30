//
// Created by rasko-lazic on 3/29/2016.
//

#ifndef OP1VEZBE_POINT_H
#define OP1VEZBE_POINT_H

class Point {
private:
    int xCoords;
    int yCoords;
public:

    Point();

    Point(int x, int y);

    static double getDistance(Point p1, Point p2);

    void showPoint();

    static bool checkIfSame(Point p1, Point p2);
};

#endif //OP1VEZBE_POINT_H
