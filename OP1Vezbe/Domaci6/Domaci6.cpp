//
// Created by rasko-lazic on 4/25/2016.
//

#include "Domaci6.h"
#include "Stack.h"

int Domaci6::execute() {
    Stack st1(7);

    st1.pushStack(2);
    st1.pushStack(4);
    st1.pushStack(1);
    st1.pushStack(0);
    st1.pushStack(5);
    st1.pushStack(6);
    st1.pushStack(5);

    st1.showStack();

    st1.pushStack(9);
    st1.pushStack(9);

    st1.showStack();

    st1.popStack();
    st1.popStack();

    st1.showStack();

    return 0;
}
