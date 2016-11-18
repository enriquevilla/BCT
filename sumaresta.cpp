//
//  main.cpp
//  zxc
//
//  Created by Enrique Villa on 9/23/16.
//  Copyright © 2016 Enrique Villa. All rights reserved.
//
/*
 
    Casos de prueba
    1. iN = 20 -> -10
    2. iN = 17 -> 9
 
 */

#include <iostream>
using namespace std;

int main() {
    int iN, iC = 1, i, iT = 1;
    cin >> iN;
    if (iN % 2 == 0) {
        iN = iN - 1; }
    for (i = 1; iC < iN - 1; i++, iC += 2) {
        if (i % 2 != 0 && iC != iN) {
            cout << iC << " - ";
            iC += 2;
            iT = iT - iC;
            iC -= 2;
        } else if (i % 2 == 0 && iC != iN) {
            cout << iC << " + ";
            iT = iT + iC + 2;
        }
    }
    cout << iC << " = " << iT << endl;
    return 0;
}
