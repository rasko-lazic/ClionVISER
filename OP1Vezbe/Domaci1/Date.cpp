//
// Created by rasko-lazic on 3/24/2016.
//

#include "Date.h"
#include <iostream>

using namespace std;

Date::Date() {
    int value, validation;

    cout << "Enter a year: ";
    cin >> value;
    this->setYear(value);

    do {
        cout << "Enter a month: ";
        cin >> value;

        validation = this->setMonth(value);
    } while(validation);

    do {
        cout << "Enter a day: ";
        cin >> value;

        validation = this->setDay(value);
    } while(validation);
}

Date::Date(int day, int month, int year) {
    this->day = day;
    this->month = month;
    this->year = year;
}

void Date::setYear(int value) {
    year = value;
}

int Date::setMonth(int value) {
    if(value >= 1 && value <= 12) {
        month = value;

        return 0;
    } else {
        cout << "The value you entered was invalid. Please try again." << endl;

        return 1;
    }
}

int Date::setDay(int value) {

    if(this->year % 4 == 0) {
        monthLength[1]++;
        this->leap = true;
    }

    if(value >= 1 && value <= monthLength[this->month - 1]) {
        day = value;

        return 0;
    } else {
        cout << "The value you entered was invalid. Please try again." << endl;

        return 1;
    }
}

int Date::getDay() {
    return this->day;
}

int Date::getMonth() {
    return this->month;
}

int Date::getYear() {
    return this->year;
}

int Date::getMonthLength() {
    return monthLength[this->month - 1];
}

void Date::showDate() {

    cout << this->day << "." << this->month << "." << this->year << "." <<endl;
}

Date Date::nextDay() {
    if(this->day == monthLength[this->month - 1]) {
        if(this->month == 12) {
            Date next(1, 1, this->year + 1);

            return next;
        } else {
            Date next(1, this->month + 1, this->year);

            return next;
        }
    } else {
        Date next(this->day + 1, this->month, this->year);

        return next;
    }
}

Date Date::previousDay() {
    int previousMonthLength;

    if(this->day == 1) {
        if(this->month == 1) {
            previousMonthLength = monthLength[11];
            Date prev(previousMonthLength, 12, this->year - 1);

            return prev;
        } else {
            previousMonthLength = monthLength[this->month - 2];
            Date prev(previousMonthLength, this->month - 1, this->year);

            return prev;
        }
    } else {
        Date prev(this->day - 1, this->month, this->year);

        return prev;
    }
}