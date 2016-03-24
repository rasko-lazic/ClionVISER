//
// Created by rasko-lazic on 3/23/16.
//

#include "Predavanje5.h"
#include "Complex.h"

using namespace std;

int Predavanje5::execute(void) {
    Complex test(3, 2);
    Complex test2;

    test2 = test.conjugate();
    test.showNumber();
    test2.showNumber();

    return 0;
}