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
        int monthLength[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        if(this->year % 4 == 0) {
            monthLength[1]++;
        }

        if(value > 0 && value <=     monthLength[this->month - 1]) {
            day = value;

            return 0;
        } else {
            cout << "The value you entered was invalid. Please try again." << endl;

            return 1;
        }
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
    }
};