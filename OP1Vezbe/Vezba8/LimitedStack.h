//
// Created by rasko-lazic on 6/12/2016.
//

#ifndef OP1VEZBE_LIMITEDSTACK_H
#define OP1VEZBE_LIMITEDSTACK_H

class LimitedStack {
private:
    int lstackLength;
    int** lstack;
    int lstackCount;

public:

    LimitedStack();

    LimitedStack(int length);

    int getLstackCount();

    void LstackPush(int value);

    int LstackPop();

    void showLstack();
};

#endif //OP1VEZBE_LIMITEDSTACK_H
