//
//  main.cpp
//  centenas
//
//  Created by Enrique Villa on 8/30/16.
//  Copyright © 2016 Enrique Villa. All rights reserved.
//
/*
    Programa para redondear cada posición de un número entero de hasta 6 dígitos
 
    Algoritmo
    1. Teclear un número de 6 dígitos
    2. Leer los inputs
    3. Imprimir cada redondeo que realiza el programa

    Casos de prueba
    234567 = 234570, 234600, 235000, 240000, 200000
    123456 = 123460, 123500, 124000, 120000, 100000
 
    Para agregar dígitos al redondeo, sólo es necesario copiar el bloque if else y agregarle un 0 a todos los 
    números dentro de la condición, como se puede observar en la diferencia de los bloques de este código.
 */

#include <iostream>
using namespace std;

int main() {
    int iNum;
    cin >> iNum;
    if (iNum % 10 >= 5) {
        cout << iNum + (10 - iNum % 10) << endl;
        iNum = iNum + (10 - iNum % 10);
    } else {
        cout << iNum - (iNum % 10) << endl;
        iNum = iNum - (iNum % 10);
    }
    if (iNum % 100 >= 50) {
        cout << iNum + (100 - iNum % 100) << endl;
        iNum = iNum + (100 - iNum % 100);
    } else {
        cout << iNum - (iNum % 100) << endl;
        iNum = iNum - (iNum % 100);
    }
    if (iNum % 1000 >= 500) {
        cout << iNum + (1000 - iNum % 1000) << endl;
        iNum = iNum + (1000 - iNum % 1000);
    } else {
        cout << iNum - (iNum % 1000) << endl;
        iNum = iNum - (iNum % 1000);
    }
    if (iNum % 10000 >= 5000) {
        cout << iNum + (10000 - iNum % 10000) << endl;
        iNum = iNum + (10000 - iNum % 10000);
    } else {
        cout << iNum - (iNum % 10000) << endl;
        iNum = iNum - (iNum % 10000);
    }
    if (iNum % 100000 >= 50000) {
        cout << iNum + (100000 - iNum % 100000) << endl;
        iNum = iNum + (100000 - iNum % 100000);
    } else {
        cout << iNum - (iNum % 100000) << endl;
        iNum = iNum - (iNum % 100000);
    }
    return 0;
}
