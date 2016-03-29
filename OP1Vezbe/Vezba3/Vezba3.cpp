//
// Created by rasko-lazic on 3/29/2016.
//

#include "Vezba3.h"
#include "EventDate.h"
#include "Event.h"
#include <iostream>

using namespace std;

int Vezba3::execute() {
    EventDate date1(12, 3, 2016), date2;

    date1.showDate();
    date2.showDate();

    cout << "The earlier date is: ";
    EventDate::compareDates(date1, date2);

    Event event1(date1, "TestTitle1", "TestDescription1"), event2(date2, "Title is test", "Description also");

    event1.showEvent();
    event2.showEvent();

    return 0;
}