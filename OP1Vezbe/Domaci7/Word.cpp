//
// Created by rasko-lazic on 5/18/16.
//

#include "Word.h"
#include <iostream>

string Word::getOriginal() {
    return originalWord;
}

string Word::getTranslation() {
    return translationWord;
}

void Word::setOriginal(string o) {
    originalWord = o;
}

void Word::setTranslation(string t) {
    translationWord = t;
}

void Word::showWord() {
    cout << originalWord << ": { " << translationWord << " }" << endl;
}