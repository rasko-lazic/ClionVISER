//
// Created by rasko-lazic on 4/21/16.
//

#ifndef OP1VEZBE_NEWS_H
#define OP1VEZBE_NEWS_H

#include <string>

using namespace std;

class News {
private:
    string newsTitle;
    string newsContent;

public:

    //TODO check single attribute initialization
    News(string title, string content) : newsTitle(title), newsContent(content) { }

    News() = default;

    string getTitle();

    string getContent();

    void setTitle(string title);

    void setContent(string content);

    void showNews();
};

#endif //OP1VEZBE_NEWS_H
