//
// Created by rasko-lazic on 4/21/16.
//

#include "News.h"
#include <iostream>

using namespace std;

string News::getTitle() {
    return newsTitle;
}

string News::getContent() {
    return newsContent;
}

void News::setTitle(string title) {
    newsTitle = title;
}

void News::setContent(string content) {
    newsContent = content;
}

void News::showNews() {
    cout << newsTitle << "[" << newsContent << "]" << endl;
}
