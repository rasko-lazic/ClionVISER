//
// Created by rasko-lazic on 5/18/16.
//

#include "Dictionary.h"
#include <iostream>

Dictionary::Dictionary(Dictionary &value) {

}

void Dictionary::addWord(Word *value) {
    wordList* wl = new wordList;
    wl->word = value;

    if(first == nullptr) {
        first = wl;
    } else {
        last->next = wl;
    }
    last = wl;
}

Word Dictionary::findWord(string original) {
    wordList* iter = first;

    while(iter != nullptr) {
        if(iter->word->getOriginal() == original) {
            return *iter->word;
        }
        iter = iter->next;
    }
}

void Dictionary::showDictionary() {
    wordList* iter = first;

    cout << dictionaryTitle << endl;
    while(iter != nullptr) {
        iter->word->showWord();
        iter = iter->next;
    }
}



