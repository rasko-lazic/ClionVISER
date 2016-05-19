//
// Created by rasko-lazic on 5/19/2016.
//

#include "Book.h"

Book::Book(string title, int length) {
    for(int i = 0; i < bookLength; i++) {
        bookContent[i] = nullptr;
    }
}

string Book::getTitle() {
    return bookTitle;
}

Paper Book::getPaper(int index) {
    return bookContent[index];
}

//int Book::getPageCount() {
//    for(int i = 0; i < bookLength; i++) {
//        if(bookContent[i] == nullptr)
//    }
//}

void Book::addPaper(Paper p) {
    bookContent[p.getNumber()] = p;
}