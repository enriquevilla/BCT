//
//  main.cpp
//  xcv4
//
//  Created by Enrique Villa on 10/7/16.
//  Copyright © 2016 Enrique Villa. All rights reserved.
//
/*
    Algoritmo
    1. Pedir los números
    2. Los números entran en su respectivo loop para ser invertidos
    3. Ya estando invertidos se suman
    4. Se invierte esa suma nuevamente
    5. Se imprime el resultado
 */

#include <iostream>
using namespace std;

int main() {
    int iA, iB, iT, iRA = 0, iRB = 0, iRT = 0;
    cin >> iA;
    cin >> iB;
    for (; iA != 0; ) {
        iRA = iRA * 10;
        iRA = iA % 10 + iRA;
        iA = iA / 10;
    }
    for (; iB != 0; ) {
        iRB = iRB * 10;
        iRB = iB % 10 + iRB;
        iB = iB / 10;
    }
    iT = iRA + iRB;
    for (; iT != 0; ) {
        iRT = iRT * 10;
        iRT = iT % 10 + iRT;
        iT = iT / 10;
    }
    cout << iRT << endl;
    return 0;
}