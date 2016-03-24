//
// Created by rasko-lazic on 3/11/2016.
//

#include "Point.h"
#include "Predavanje3.h"
#include <time.h>

using namespace std;

int Predavanje3::execute(void) {
    Point P;
    double i, hit, resolution, pi;

    srand(time(NULL));

    while(1) {
        hit = 0;
        cout << "Enter desired resolution: ";
        cin >> resolution;
        if(resolution == 0) {
            cout << "Thanks for playing!" << endl;
            break;
        }
        for( i = 0; i < resolution; i++) {
            P.randomize();
            if(P.distance() <= 1) {
                hit++;
            }
        }

        pi = ((4 * hit) / resolution);
        cout << "Pi: " << pi << endl;
    }

    return 0;
}
