//
// Created by rasko-lazic on 6/12/2016.
//

#ifndef OP1VEZBE_UNLIMITEDSTACK_H
#define OP1VEZBE_UNLIMITEDSTACK_H

class UnlimitedStack {
private:
    int ustackCount;
    struct ustackElement {
        int* value;
        ustackElement* next;
    };
    ustackElement* first;
    ustackElement* last;

public:

    UnlimitedStack();

    int getUstackCount();

    void UstackPush(int value);

    int UstackPop();

    void showUstack();
};

#endif //OP1VEZBE_UNLIMITEDSTACK_H
