//
// Created by rasko-lazic on 4/14/2016.
//

#ifndef OP1VEZBE_DOT_H
#define OP1VEZBE_DOT_H

class Dot {
private:
    int xCoord;
    int yCoord;
public:

    Dot();

    Dot(int x, int y);

    static double getDistance(Dot p1, Dot p2);

    void showDot();

    static bool checkIfColinear(Dot p1, Dot p2, Dot p3);

    int getX();

    int getY();
};

#endif //OP1VEZBE_DOT_H
