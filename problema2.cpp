//
//  main.cpp
//  problema2
//
//  Created by Enrique Villa on 9/4/16.
//  Copyright © 2016 Enrique Villa. All rights reserved.
//
/*
 Programa que pida dos números, encuentre el menor y lo imprima
 
 Algoritmo
 1. Establecer la función
 2. Pedir los numeros
 3. Llamar la función
 4. Imprimir el número menor
 
 Casos de prueba
 5 6 7 8 = 5
 6 5 7 8 = 5
 6 7 5 8 = 5
 6 7 8 5 = 5
 
 */

#include <iostream>
using namespace std;

int funcion(int iX, int iY)
{
    if (iX < iY) {
        return iX;
    } else {
        return iY;
    }
}
int main() {
    int iNum1, iNum2, iNum3, iNum4;
    cout << "Teclee los números:" << endl;
    cin >> iNum1 >> iNum2 >> iNum3 >> iNum4;
    iNum1 = funcion(iNum1,iNum2);
    iNum1 = funcion(iNum1,iNum3);
    iNum1 = funcion(iNum1,iNum4);
    cout << iNum1 << endl;
    return 0;
}
