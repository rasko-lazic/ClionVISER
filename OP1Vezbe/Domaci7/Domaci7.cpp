//
// Created by rasko-lazic on 5/18/16.
//

#include "Domaci7.h"
#include "Dictionary.h"

int Domaci7::execute() {
    Dictionary dic1("Serbian-English dictionary");

    Word w1("sto", "table"), w2("olovka", "pencil"), w3("papir", "paper");

    dic1.addWord(&w1);
    dic1.addWord(&w2);
    dic1.addWord(&w3);

    dic1.showDictionary();
}

