//
// Created by rasko-lazic on 3/19/16.
//

#include "Domaci1.h"
#include "Date.h"
#include <iostream>

using namespace std;

int Domaci1::execute(void) {
    Date newDate;

    cout << "Your date is ";
    newDate.showDate();

    cout << "Selected year is: " << newDate.getYear() << endl;

    cout << "Selected month has: " << newDate.getMonthLength() << " days" << endl;

    if(newDate.leap) {
        cout << "Selected year is leap year." << endl;
    } else {
        cout << "Selected year is not leap year." << endl;
    }

    cout << "Prevoius date is ";

    Date prev = newDate.previousDay();

    prev.showDate();

    cout << "Next date is ";

    Date next = newDate.nextDay();

    next.showDate();
}
