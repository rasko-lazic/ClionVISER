//
// Created by rasko-lazic on 3/24/2016.
//

#ifndef OP1VEZBE_DATE_H
#define OP1VEZBE_DATE_H

class Date {
private:
    int day, month, year;

public:

    Date();

    Date(int day, int month, int year);

    static Date compareDates(Date date1, Date date2);

    void setYear(int value);

    void setMonth(int value);

    void setDay(int value);

    void showDate();
};


#endif //OP1VEZBE_DATE_H
