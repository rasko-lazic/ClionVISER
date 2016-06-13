//
// Created by rasko-lazic on 5/19/2016.
//

#ifndef OP1VEZBE_BOOK_H
#define OP1VEZBE_BOOK_H

#include "Paper.h"

class Book {
private:
    string bookTitle;
    Paper** bookContent;
    int bookLength;

public:

    Book(string title, int length);

    string getTitle();

    Paper getPaper(int index);

    void addPaper(Paper p);

    int getPageCount();

    void showBook();
};

#endif //OP1VEZBE_BOOK_H
