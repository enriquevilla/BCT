//
//  main.cpp
//  zxc2
//
//  Created by Enrique Villa on 9/23/16.
//  Copyright © 2016 Enrique Villa. All rights reserved.
//
/*
    Casos de prueba
    1. 1 -> NOT PRIME
    2. 2 -> PRIME
    3. 4 -> NOT PRIME
    4. 11 -> PRIME
 */

#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int iP = 1, iN, i = 2;
    cin >> iN;
        while (i < iN && iP == 1) {
            if (iN % i != 0) {
                iP = 1;
            } else {
                iP = 0;
            } i++;
        }
    if ((iP == 1 && iN > 1) || iN == 2) {
        cout << "PRIME" << endl;
    } else {
        cout << "NOT A PRIME" << endl;
    }
    return 0;
}