//
// Created by rasko-lazic on 3/27/16.
//

#include "Color.h"
#include <iostream>

using namespace std;

Color::Color(int red, int blue, int green): red(red), blue(blue), green(green) {
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

void Color::setRed(int value) {
    if(value > 255 || value < 0) {
        this->red = 0;
    } else {
        this->red = value;
    }
}

void Color::setBlue(int value) {
    if(value > 255 || value < 0) {
        this->blue = 0;
    } else {
        this->blue = value;
    }
}

void Color::setGreen(int value) {
    if(value > 255 || value < 0) {
        this->green = 0;
    } else {
        this->green = value;
    }
}

int Color::getRed() {
    return this->red;
}

int Color::getBlue() {
    return this->blue;
}

int Color::getGreen() {
    return this->green;
}

void Color::show() {
    cout << "Value for selected color" << endl;
    cout << "Red: " << this->red << endl;
    cout << "Blue: " << this->blue << endl;
    cout << "Green: " << this->green << endl;
}
