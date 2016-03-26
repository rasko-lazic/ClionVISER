//
// Created by rasko-lazic on 3/27/16.
//

#ifndef OP1VEZBE_COLOR_H
#define OP1VEZBE_COLOR_H

class Color {
private:
    int red, blue, green, value;

public:

    Color(int red, int blue, int green);

    void setRed(int value);

    void setBlue(int value);

    void setGreen(int value);

    int getRed();

    int getBlue();

    int getGreen();

    void show();
};

#endif //OP1VEZBE_COLOR_H
