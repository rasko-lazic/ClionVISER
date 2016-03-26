//
// Created by rasko-lazic on 3/24/2016.
//

#ifndef OP1VEZBE_EVENTDATE_H
#define OP1VEZBE_EVENTDATE_H

class EventDate {
private:
    int day, month, year;

public:

    EventDate();

    EventDate(int day, int month, int year);

    static void compareDates(EventDate date1, EventDate date2);

    void setYear(int value);

    void setMonth(int value);

    void setDay(int value);

    void showDate();
};


#endif //OP1VEZBE_EVENTDATE_H
