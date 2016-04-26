//
// Created by rasko-lazic on 4/25/2016.
//

#ifndef OP1VEZBE_DLLIST_H
#define OP1VEZBE_DLLIST_H

#include <string>

using namespace std;

class DLList {
private:
    struct listElement {
        string value;
        listElement* previous;
        listElement* next;
    };

    listElement* first;
    listElement* last;

public:

    DLList() : first(nullptr), last(nullptr) { }

    void setElement(string str);

    listElement* getElement(string index);

    void insertAfter(string ref, string fresh);

    void showList();
};

#endif //OP1VEZBE_DLLIST_H
