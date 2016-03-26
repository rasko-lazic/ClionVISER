//
// Created by rasko-lazic on 3/24/2016.
//

#include "Date.h"
#include <iostream>

using namespace std;

Date::Date() {
    day = 24;
    month = 3;
    year = 2016;
}

Date::Date(int day, int month, int year) {
    this->day = day;
    this->month = month;
    this->year = year;
}

Date Date::compareDates(Date date1, Date date2) {
    if(date1.year == date2.year) {
        if(date1.month == date2.month) {
            if(date1.day == date2.day) {
                cout << "The two dates you are comparing are identical." << endl;
            } else {
                Date returnDate = date1.day < date2.day ? date1 : date2;

                return returnDate;
            }
        } else {
            Date returnDate = date1.month < date2.month ? date1 : date2;

            return returnDate;
        }
    } else {
        Date returnDate = date1.year < date2.year ? date1 : date2;

        return  returnDate;
    }
}
