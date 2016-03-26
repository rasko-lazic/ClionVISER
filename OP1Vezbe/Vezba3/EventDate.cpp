//
// Created by rasko-lazic on 3/24/2016.
//

#include "EventDate.h"
#include <iostream>

using namespace std;

EventDate::EventDate() {
    day = 24;
    month = 3;
    year = 2016;
}

EventDate::EventDate(int day, int month, int year) {
    this->day = day;
    this->month = month;
    this->year = year;
}

void EventDate::compareDates(EventDate date1, EventDate date2) {
    if(date1.year == date2.year) {
        if(date1.month == date2.month) {
            if(date1.day == date2.day) {
                cout << "The two dates you are comparing are identical." << endl;
            } else {
                EventDate returnDate = date1.day < date2.day ? date1 : date2;

                returnDate.showDate();
            }
        } else {
            EventDate returnDate = date1.month < date2.month ? date1 : date2;

            returnDate.showDate();
        }
    } else {
        EventDate returnDate = date1.year < date2.year ? date1 : date2;

        returnDate.showDate();
    }
}

void EventDate::setYear(int value) {
    year = value;
}

void EventDate::setMonth(int value) {
    month = value;
}

void EventDate::setDay(int value) {
    day = value;
}

void EventDate::showDate() {
    cout << day << "." << month << "." << year << endl;
}
