//
//  main.cpp
//  xcv3
//
//  Created by Enrique Villa on 10/7/16.
//  Copyright © 2016 Enrique Villa. All rights reserved.
//
/*
    Algoritmo
    1. Pedir número límite
    2. Se realiza la operación hasta que se pasa del número límite, imprimiendo el número cada vez que entra el loop.
 
 */

#include <iostream>
using namespace std;

int main() {
    int iA, iR = 1, iN1 = 0, iN2 = 1;
    cin >> iA;
    for (; iR <= iA;) {
        cout << iR << " ";
        iR = iN1 + iN2;
        iN1 = iN2;
        iN2 = iR;
        
    }
    cout << endl;
    return 0;
}