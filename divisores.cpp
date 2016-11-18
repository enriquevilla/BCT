//
//  main.cpp
//  xcv
//
//  Created by Enrique Villa on 10/4/16.
//  Copyright © 2016 Enrique Villa. All rights reserved.
//
/*
    Algoritmo
    1. Pedir números
    2. Hacer un contador para incrementar y checar todo el rango de números
    3. Hacer un contador para checar todos los números que son divisores
 */

#include <iostream>
using namespace std;

int main() {
    int iA, iB;
    cin >> iA >> iB;
    for (int iC = iA; iC <= iB; iC++, iA++) {
        cout << "VALUE " << iA << endl;
        cout << "DIVISORS ";
        for (int iC2 = 1; iC2 < iA; iC2++) {
            if (iA % iC2 == 0) {
                cout << iC2 << " ";
            }
        }
        cout << endl;
    }
    return 0;
}