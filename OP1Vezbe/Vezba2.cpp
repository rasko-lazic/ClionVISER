//
// Created by rasko-lazic on 3/19/16.
//

#include "Vezbe.h"
#include <iostream>

using namespace std;

class Color {
private:
    int red, blue, green, value;

public:
    Color(int red, int blue, int green): red(red), blue(blue), green(green) {
        if(this->red < 0 || this->red > 255) {
            this->red = 0;
        }
        if(this->blue < 0 || this->blue > 255) {
            this->blue = 0;
        }
        if(this->green < 0 || this->green > 255) {
            this->green = 0;
        }
    }

    void setRed(int value) {
        if(value > 255 || value < 0) {
            this->red = 0;
        } else {
            this->red = value;
        }
    }

    void setBlue(int value) {
        if(value > 255 || value < 0) {
            this->blue = 0;
        } else {
            this->blue = value;
        }
    }

    void setGreen(int value) {
        if(value > 255 || value < 0) {
            this->green = 0;
        } else {
            this->green = value;
        }
    }

    int getRed() {
        return this->red;
    }

    int getBlue() {
        return this->blue;
    }

    int getGreen() {
        return this->green;
    }

    void show() {
        cout << "Value for selected color" << endl;
        cout << "Red: " << this->red << endl;
        cout << "Blue: " << this->blue << endl;
        cout << "Green: " << this->green << endl;
    }

};

class Vezba2: public Vezba {
public:
    int execute() {
        Color color1(4, 124, 15), color2(12, 123, 14);

        color1.show();
        color2.show();

        color1.setBlue(256);
        color2.setRed(-3);

        color1.show();
        color2.show();
    }
};