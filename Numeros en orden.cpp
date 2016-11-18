//
//  main.cpp
//  tarea7
//
//  Created by Enrique Villa on 10/27/16.
//  Copyright © 2016 Enrique Villa. All rights reserved.
//
/*
    Enrique Villa A01193635

    Programa para imprimir un arreglo de números por orden
 
    Algoritmo
 1. Pedir y leer N
 2. Pedir y leer valores para el arreglo hasta la cantidad N de valores y checar si cumplen las condiciones
 3. Imprimir los números del arreglo cuando se haya llegado a N valores en el arreglo
 
    Casos de prueba
    1. N = 3, [0] = 101 -> error, [0] = 1, [1] = -1 -> error, [1] = 0 -> error, [1] = 6, [2] = 100
        Valores tecleados: 1, 6, 100

 */

#include <iostream>
using namespace std;

int main() {
    int iArrNum[100], iN;
    cout << "Teclee el número de valores enteros a introducir (1-101)" << endl;
    cin >> iN;
    cout << "Teclee el valor 0:" << endl;
    cin >> iArrNum[0];
    while (iArrNum[0] < 0 || iArrNum[0] > 100) {
        cout << "Error" << endl;
        cout << "Teclea otro número para el valor 0:" << endl;
        cin >> iArrNum[0];
    }
        for (int iCont = 1; iN > iCont; iCont++) {
            cout << "Teclee el valor " << iCont << ":" << endl;
            cin >> iArrNum[iCont];
            while (iArrNum[iCont] <= iArrNum[iCont - 1] || iArrNum[iCont] > 100 || iArrNum[iCont] < 0) {
                cout << "Error" << endl;
                cout << "Teclee otro número para el valor " << iCont << ":" << endl;
                cin >> iArrNum[iCont];
            }
        }
    cout << "Los valores tecleados son:" << endl;
        for (int iCont = 0; iCont < iN; iCont++) {
            cout << iArrNum[iCont] << endl;
        }
    return 0;
}
