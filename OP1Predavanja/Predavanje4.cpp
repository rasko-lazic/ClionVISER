//
// Created by rasko-lazic on 3/16/16.
//

#include "Predavanje.h"

using namespace std;

class Predavanje4 : public Predavanje {

public:
    void hanoiRecursion(int stackSize, int source, int helper, int destination) {
        string stacks[] = {"source", "helper", "destination"};
        if(stackSize == 0) {
            cout << "Move disk " << stackSize << " from " << stacks[source] << " to " << stacks[destination] << endl;
        }
        else {
            hanoiRecursion(stackSize-1, source, destination, helper);
            cout << "Move disk " << stackSize << " from " << stacks[source] << " to " << stacks[destination] << endl;
            hanoiRecursion(stackSize-1, helper, source, destination);
        }
    }
    int execute(void) {
        int stackSize;

        cout << "How many disks do you want to move: ";
        cin >> stackSize;

        hanoiRecursion(stackSize-1, 0, 1, 2);

        return 0;
    }
};

