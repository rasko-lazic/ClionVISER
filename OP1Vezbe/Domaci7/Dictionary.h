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

    Dictionary() = default;

    Dictionary(string title) : dictionaryTitle(title), first(nullptr) { }

    //TODO why const???
    Dictionary(const Dictionary& value);

    //TODO check move constructor syntax and usage
    //Dictionary(Dictionary&& value);

    void addWord(Word* value);

    Word* findWord(string original);

    void showDictionary();
};

#endif //OP1VEZBE_DICTIONARY_H
