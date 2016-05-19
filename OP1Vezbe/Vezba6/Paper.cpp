//
// Created by rasko-lazic on 5/19/2016.
//

#include "Paper.h"
#include <iostream>

int Paper::getNumber() {
    return paperNumber;
}

string Paper::getContent() {
    return paperContent;
}

void Paper::setNumber(int n) {
    paperNumber = n;
}

void Paper::setContent(string c) {
    paperContent = c;
}

bool Paper::comparePaper(Paper other) {
    return this->paperNumber == other.paperNumber;
}

void Paper::appendContent(string c) {
    paperContent += c;
}

void Paper::showPaper() {
    cout << paperContent << " (" << paperNumber << ")" << endl;
}