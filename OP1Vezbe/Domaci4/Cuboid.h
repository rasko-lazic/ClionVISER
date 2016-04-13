//
// Created by rasko-lazic on 4/13/16.
//

#ifndef OP1VEZBE_CUBOID_H
#define OP1VEZBE_CUBOID_H

class Cuboid {
private:
    double cuboidWidth;
    double cuboidHeight;
    double cuboidLength;

public:
    Cuboid();

    Cuboid(double width, double height, double length);

    void setWidth(double value);

    void setHeight(double value);

    void setLength(double value);

    double getWidth();

    double getHeight();

    double getLength();

    double getArea();

    double getVolume();

    void showCuboid();
};

#endif //OP1VEZBE_CUBOID_H
