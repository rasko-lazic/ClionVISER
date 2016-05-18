//
// Created by rasko-lazic on 5/18/16.
//

#include "Domaci7.h"
#include "Dictionary.h"
#include <iostream>

int Domaci7::execute() {
    Dictionary dic1("Serbian-English dictionary");

    Word w1("sto", "table"), w2("olovka", "pencil"), w3("papir", "paper");

    dic1.addWord(&w1);
    dic1.addWord(&w2);
    dic1.addWord(&w3);

    Dictionary copyDic1;

    copyDic1 = dic1;

    copyDic1.showDictionary();

    Word *fw1;

    fw1 = dic1.findWord("sto");

    cout << "Found word: ";
    fw1->showWord();
}

