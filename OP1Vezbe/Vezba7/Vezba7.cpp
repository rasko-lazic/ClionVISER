//
// Created by rasko-lazic on 4/21/16.
//

#include "Vezba7.h"
#include "Magazine.h"

int Vezba7::execute() {
    News a("test","test");
    News b("bla","bla");
    News c("foo","bar");
    Magazine mag("Viser", 20160420);
    mag.addNews(a);
    mag.addNews(b);
    mag.addNews(c);

    mag.showMagazine();
    News *gotNews = mag.getNews("foo");
    gotNews->showNews();

    return 0;
}
