//
// Created by rasko-lazic on 4/21/16.
//

#include "Magazine.h"
#include <iostream>

using namespace std;

void Magazine::addNews(News fresh) {
    newsElement* nl = new newsElement();

    nl->value = fresh;

    if(first == nullptr) {
        first = nl;
        last = nl;
        first->next = last;
    } else {
        last->next = nl;
    }

    last = nl;
}

News* Magazine::getNews(string title) {
    newsElement* iter = first;

    while(iter != nullptr) {
        if(iter->value.getTitle() == title) {
            return &iter->value;
        }
        iter = iter->next;
    }

    return nullptr;
}

void Magazine::showMagazine() {
    newsElement* iter = first;

    cout << magazineTitle << endl;

    while(iter != nullptr) {
        iter->value.showNews();
        iter = iter->next;
    }
}
