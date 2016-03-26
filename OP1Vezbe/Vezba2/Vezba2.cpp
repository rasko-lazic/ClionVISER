//
// Created by rasko-lazic on 3/19/16.
//

#include "Vezba2.h"
#include "Color.h"

int Vezba2::execute() {
    Color color1(4, 124, 15), color2(12, 123, 14);

    color1.show();
    color2.show();

    color1.setBlue(256);
    color2.setRed(-3);

    color1.show();
    color2.show();

    return 0;
}