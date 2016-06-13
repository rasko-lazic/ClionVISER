//
// Created by rasko-lazic on 5/19/2016.
//

#include "Vezba6.h"
#include "Book.h"
#include <iostream>

int Vezba6::execute() {

    Paper p1(3, "Hello");
    p1.appendContent(" world");
    Paper p2(4, "Test");
    Paper p3(5, "This also");
    Paper p4(4, "switch");

    Book b1("My first book", 10);
    b1.addPaper(p1);
    b1.addPaper(p2);
    b1.addPaper(p3);

    b1.showBook();

    b1.addPaper(p4);
    b1.showBook();
    cout << "Page count: " << b1.getPageCount() << endl;
    return 0;
}

