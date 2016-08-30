//
//  main.cpp
//  triángulo
//
//  Created by Enrique Villa on 8/23/16.
//  Copyright © 2016 Enrique Villa. All rights reserved.
//
/*
Programa para definir la clase de triángulo basado en los lados

Algoritmo
 1.Pedir lado 1
 2.Pedir lado 2
 3.Pedir lado 3
 4.Desplegar la clase de triángulo
 
Casos de prueba
 
 1. 5,5,5 = equilátero
 2. 5,4,4 = isóceles
 3. 5,5,4 = isóceles
 4. 5,4,5 = isóceles
 5. 5,4,3 = escaleno
 
 */

#include <iostream>
using namespace std;

int main() {
    int iLado1;
    int iLado2;
    int iLado3;
    cout << "Teclea el valor del lado 1:" << endl;
    cin >> iLado1;
    cout << "Teclea el valor del lado 2:" << endl;
    cin >> iLado2;
    cout << "Teclea el valor del lado 3:" << endl;
    cin >> iLado3;
    if (iLado1 && iLado2 && iLado3 > 0
        && iLado1+iLado2>iLado3
        && iLado1+iLado3>iLado2
        && iLado2+iLado3>iLado1) {
    if (iLado1 == iLado2 && iLado1 == iLado3) {
        cout << "EQUILATERAL" << endl;
    } else {
        if (iLado1 == iLado2 || iLado1 == iLado3 || iLado2 == iLado3) {
            cout << "ISOSCELES" << endl;
        } else {
            cout << "SCALENE" << endl;
        } 
    }
    } else {
        cout << "NOT A TRIANGLE" << endl;
    }
    return 0;
}
