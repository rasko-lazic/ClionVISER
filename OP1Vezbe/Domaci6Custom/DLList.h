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
        int index;
        listElement* previous;
        listElement* next;
    };

    listElement* first;
    listElement* last;

public:

    DLList() : first(nullptr), last(nullptr) { }

    void setElement(string str);

    string getElement(int search);

    void insertAfter(int search, string fresh);

    void incrementIndex(int search);

    void decrementIndex(int search);

    bool checkIfOverHalf(int search);

    void removeElement(int search);

    void showList();
};

#endif //OP1VEZBE_DLLIST_H
