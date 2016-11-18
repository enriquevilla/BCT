//
//  main.cpp
//  xcv2
//
//  Created by Enrique Villa on 10/4/16.
//  Copyright © 2016 Enrique Villa. All rights reserved.
//
/*
    Algoritmo
    1. Pedir número límite
    2. Inicializar ambos números con diferencia de 2 de manera definitiva.
    3. Checar al sumarle a ambos 1 si son primos
    4. Si ambos son primos, se imprimen.
 */

#include <iostream>
using namespace std;

int main() {
    int iA, i1 = 2, i2 = 4, iP1 = 1, iP2 = 1;
    cin >> iA;
    for (; i2 <= iA; i1++, i2++) {
        for (int iC2 = 2; iP1 == 1 && iC2 < i1; iC2++) {
            if (i1 % iC2 == 0)
                iP1 = 0;
            if (i2 % iC2 == 0)
                iP2 = 0;
        }
        if (iP1 == 1 && iP2 == 1 && i1 != 2) {
            cout << "PRIME PAIR " << i1 << " " << i2 << endl;
        } else {
            iP1 = 1;
            iP2 = 1;
        }
    }
    return 0;
}