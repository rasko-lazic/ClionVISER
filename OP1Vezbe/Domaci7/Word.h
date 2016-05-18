//
// Created by rasko-lazic on 5/18/16.
//

#ifndef OP1VEZBE_WORD_H
#define OP1VEZBE_WORD_H

#include <string>

using namespace std;

class Word {
private:
    string originalWord;
    string translationWord;

public:

    Word(string o, string t) : originalWord(o), translationWord(t) { }

    string getOriginal();

    string getTranslation();

    void setOriginal(string o);

    void setTranslation(string t);

    void showWord();
};

#endif //OP1VEZBE_WORD_H
