//
// Created by rasko-lazic on 5/18/16.
//

#ifndef OP1VEZBE_DICTIONARY_H
#define OP1VEZBE_DICTIONARY_H

#include "Word.h"

class Dictionary {
private:
    string dictionaryTitle;

    struct wordList {
        Word* word;
        wordList* next;
    };
    wordList* first;
    wordList* last;

public:

    Dictionary(string title) : dictionaryTitle(title), first(nullptr) { }

    Dictionary(Dictionary& value);

    Dictionary(Dictionary&& value);

    void addWord(Word* value);

    Word findWord(string original);

    void showDictionary();
};

#endif //OP1VEZBE_DICTIONARY_H
