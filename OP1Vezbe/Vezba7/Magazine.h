//
// Created by rasko-lazic on 4/21/16.
//

#ifndef OP1VEZBE_MAGAZINE_H
#define OP1VEZBE_MAGAZINE_H

#include "News.h"

class Magazine {
private:
    string magazineTitle;
    double magazineDate;

    struct newsElement {
        News value;
        newsElement *next;
    };

    newsElement *first;
    newsElement *last;

public:
    Magazine(string title, double date) : magazineTitle(title), magazineDate(date), first(nullptr), last(nullptr) { }

    void addNews(News fresh);

    News* getNews(string title);

    void showMagazine();

};

#endif //OP1VEZBE_MAGAZINE_H
