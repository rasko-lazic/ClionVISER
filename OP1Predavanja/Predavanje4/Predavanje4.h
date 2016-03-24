//
// Created by rasko-lazic on 3/24/2016.
//

#ifndef OP1PREDAVANJA_PREDAVANJE4_H
#define OP1PREDAVANJA_PREDAVANJE4_H

#include "../Predavanje.h"

class Predavanje4 : public Predavanje {

public:
    void hanoiRecursion(int stackSize, int source, int helper, int destination);
    int execute(void);
};

#endif //OP1PREDAVANJA_PREDAVANJE4_H
