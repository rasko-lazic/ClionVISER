//
// Created by rasko-lazic on 3/24/2016.
//

#ifndef OP1VEZBE_DATE_H
#define OP1VEZBE_DATE_H

class Date {
private:
    int day, month, year;

public:
    int monthLength[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    bool leap = false;

    Date();

    Date(int day, int month, int year);

    void setYear(int value);

    int setMonth(int value);

    int setDay(int value);

    int getDay();

    int getMonth();

    int getYear();

    int getMonthLength();

    void showDate();

    Date nextDay();

    Date previousDay();

};

#endif //OP1VEZBE_DATE_H
