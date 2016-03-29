//
// Created by rasko-lazic on 3/29/2016.
//

#include <iostream>
#include "Event.h"

using namespace std;

Event::Event(EventDate date, string title, string description) {

    eventDate = date;
    eventTitle = title;
    eventDescription = description;
}

EventDate Event::getEventDate() {

    return eventDate;
}

string Event::getEventTitle() {

    return eventTitle;
}

string Event::getEventDescription() {

    return eventDescription;
}

void Event::setEventDate(EventDate date) {

    eventDate = date;
}

void Event::setEventTitle(string title) {

    eventTitle = title;
}

void Event::setEventDescription(string description) {

    eventDescription = description;
}

void Event::showEvent() {

    eventDate.showDate();
    cout << eventTitle << endl;
    cout << eventDescription << endl;
}