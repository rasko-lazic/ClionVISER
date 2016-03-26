//
// Created by rasko-lazic on 3/26/2016.
//

#ifndef OP1VEZBE_TRIANGLE_H
#define OP1VEZBE_TRIANGLE_H

class Triangle {
private:
    int a, b, c;

public:

    Triangle(int a, int b, int c);

    int getCirc();

    double getArea();
};

#endif //OP1VEZBE_TRIANGLE_H
