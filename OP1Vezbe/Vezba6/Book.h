//
// Created by rasko-lazic on 5/19/2016.
//

#ifndef OP1VEZBE_BOOK_H
#define OP1VEZBE_BOOK_H

#include "Paper.h"

class Book {
private:
    string bookTitle;
    int bookLength;
    Paper* bookContent = new Paper[bookLength];

public:

    Book(string title, int length) : bookTitle(title), bookLength(length) { }

    string getTitle();

    void addPaper(Paper p);

    Paper getPaper(int index);

    int getPageCount();

    void showBook();
};

#endif //OP1VEZBE_BOOK_H
