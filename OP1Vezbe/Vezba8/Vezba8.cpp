//
// Created by rasko-lazic on 6/12/2016.
//

#include "Vezba8.h"
#include "LimitedStack.h"
#include "UnlimitedStack.h"
#include <iostream>

using namespace std;

int Vezba8::execute() {
    LimitedStack stack1(4);

    stack1.LstackPush(7);
    stack1.LstackPush(8);
    stack1.LstackPush(9);
    stack1.LstackPush(10);

    stack1.showLstack();

    cout << "Limited stack pop: " << stack1.LstackPop() << endl;

    stack1.showLstack();

    stack1.LstackPush(12);
    stack1.LstackPush(13);

    stack1.showLstack();

    UnlimitedStack stack2;

    stack2.UstackPush(2);
    stack2.UstackPush(3);
    stack2.UstackPush(4);
    stack2.UstackPush(5);

    stack2.showUstack();

    cout << "Unlimited stack pop: " << stack2.UstackPop() << endl;

    stack2.UstackPush(6);
    stack2.UstackPush(7);

    stack2.showUstack();

    return 0;
}