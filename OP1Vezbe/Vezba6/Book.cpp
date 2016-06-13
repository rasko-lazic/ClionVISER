//
// Created by rasko-lazic on 5/19/2016.
//

#include "Book.h"
#include <iostream>

using namespace std;

Book::Book(string title, int length) {
    bookTitle = title;
    bookLength = length;
    bookContent = new Paper*[length];
    for(int i = 0; i < length; i++) {
        bookContent[i] = nullptr;
    }
}

string Book::getTitle() {
    return bookTitle;
}

Paper Book::getPaper(int index) {
    return *bookContent[index];
}

void Book::addPaper(Paper p) {
    bookContent[p.getNumber()] = &p;
}

int Book::getPageCount() {
    int counter = 0;
    for(int i =0; i < bookLength; i++) {
        if(bookContent[i] != nullptr) {
            counter++;
        }
    }

    return counter;
}

void Book::showBook() {
    cout << bookTitle << endl;
    for(int i = 0; i < bookLength; i++) {
        if(bookContent[i] != nullptr) {
            bookContent[i]->showPaper();
        }
    }
}