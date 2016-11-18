//
//  main.cpp
//  zxc3
//
//  Created by Enrique Villa on 9/23/16.
//  Copyright © 2016 Enrique Villa. All rights reserved.
//
/*
    Casos de prueba
    1. N = 1, [1] -> "1 1"
    2. N = 5, [1,2,3,4,5] -> "1 5"
    3. N = 5, [-4,-3,-2,-1,0] -> "-4 0"
    4. N = 5, [-2,-1,-3,-4,-5] -> "-5 -1"
    5. N = 5, [5,4,3,2,1] -> "1 5"
 
 */

#include <iostream>
using namespace std;

int main() {
    int iN = 0, i, iMay = -32767, iMen = 32767, iU, iV[100];
    cin >> iN;
    for (i = 1; i < iN; i++) {
        cin >> iV[i];
    }
    cin >> iU;
    for (i = 1; i < iN; i++) {
        if (iMen > iV[i]) {
            iMen = iV[i];
        if (iMay < iV[i])
            iMay = iV[i];
        }
    }
    for (i = iN - 1; i > 0; i--) {
        if (iMay < iV[i])
            iMay = iV[i];
    }
    if (iMen >= iU) {
        iMen = iU; }
    if (iMay <= iU) {
        iMay = iU; }
    cout << iMen << " " << iMay << endl;
    return 0;
}
