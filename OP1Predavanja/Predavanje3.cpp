//
// Created by rasko-lazic on 3/11/2016.
//

#include "Predavanje.h"
#include <math.h>
#include <cstdlib>
#include <time.h>

using namespace std;

class Point {
private:
    double x, y;
public:
    void randomize() {
        x = ((double) rand() / (RAND_MAX));
        y = ((double) rand() / (RAND_MAX));
    }

    double distance() {
        return sqrt(pow(this->x, 2)+pow(this->y, 2));
    }

};

class Predavanje3 : public Predavanje {

public:
    int execute(void) {
        Point P;
        double i, hit, res, pi;

        srand(time(NULL));

        do {
            hit = 0;
            cout << "Enter desired resolution: ";
            cin >> res;
            for( i = 0; i < res; i++) {
                P.randomize();
                if(P.distance() <= 1) {
                    hit++;
                }
            }

            pi = ((4 * hit) / res);
            cout << "Pi: " << pi << endl;
        } while(res != 0);

        return 0;
    }
};
