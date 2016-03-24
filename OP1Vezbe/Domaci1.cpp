//
// Created by rasko-lazic on 3/19/16.
//

#include "Vezbe.h"
#include <iostream>

using namespace std;

class Date {
private:
    int day, month, year;
public:
    int monthLength[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    bool leap = false;

    Date() {
        day = 1;
        month = 1;
        year = 1970;
    }

    void setYear(int value) {
        year = value;
    }

    int setMonth(int value) {
        if(value >= 1 && value <= 12) {
            month = value;

            return 0;
        } else {
            cout << "The value you entered was invalid. Please try again." << endl;

            return 1;
        }
    }

    int setDay(int value) {

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

    int getDay() {
        return this->day;
    }

    int getMonth() {
        return this->month;
    }

    int getYear() {
        return this->year;
    }

    int getMonthLength() {
        return monthLength[this->month - 1];
    }

};

class Domaci1: public Vezba {
public:
    int execute() {
        int value, validation;
        Date newDate;

        cout << "Enter a year: ";
        cin >> value;

        newDate.setYear(value);

        do {
            cout << "Enter a month: ";
            cin >> value;

            validation = newDate.setMonth(value);
        } while(validation);

        do {
            cout << "Enter a day: ";
            cin >> value;

            validation = newDate.setDay(value);
        } while(validation);

        cout << "Selected year is: " << newDate.getYear() << endl;

        cout << "Selected month has: " << newDate.getMonthLength() << " days" << endl;

        if(newDate.leap) {
            cout << "Selected year is leap year." << endl;
        } else {
            cout << "Selected year is not leap year." << endl;
        }
    }
};