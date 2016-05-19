//
// Created by rasko-lazic on 4/13/2016.
//

#include "Domaci4.h"
#include "CuboidArray.h"
#include <iostream>

using namespace std;

int Domaci4::execute() {
    CuboidArray firstArray, secondArray(5);

    Cuboid cube1(1, 1, 1), cube2(2, 2, 2), cube3(3, 3, 3), cube4(4, 4, 4), cube5(5, 5, 5);

    cube1.showCuboid();
    cout << endl << "His area is: " << cube1.getArea() << endl;
    cout << "His volume is: " << cube1.getVolume() << endl;

    firstArray.pushCuboid(&cube1);
    firstArray.pushCuboid(&cube2);
    firstArray.pushCuboid(&cube3);

    secondArray.pushCuboid(&cube4); 
    secondArray.pushCuboid(&cube5);

    cout << "Total volume of first array is: " << firstArray.getTotalVolume() << endl;
    cout << "Total volume of second array is: " << secondArray.getTotalVolume() << endl;

    cout << "First array of cuboids: " << endl;
    firstArray.showCuboidArray();

    firstArray.popCuboid(2);

    cout << "Array after pop: " << endl;
    firstArray.showCuboidArray();

    return 0;
}
