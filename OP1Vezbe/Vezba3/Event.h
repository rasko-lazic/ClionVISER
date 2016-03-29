//
// Created by rasko-lazic on 3/27/2016.
//

#ifndef OP1VEZBE_EVENT_H
#define OP1VEZBE_EVENT_H

#include "EventDate.h"
#include <string>

using namespace std;

class Event {
private:
    EventDate eventDate;
    string eventTitle;
    string eventDescription;

public:

    Event(EventDate date, string title, string description);

    EventDate getEventDate();

    string getEventTitle();

    string getEventDescription();

    void setEventDate(EventDate date);

    void setEventTitle(string title);

    void setEventDescription(string description);

    void showEvent();
};

#endif //OP1VEZBE_EVENT_H
