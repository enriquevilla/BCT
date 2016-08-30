//
//  main.cpp
//  ejercicio
//
//  Created by Enrique Villa on 8/23/16.
//  Copyright © 2016 Enrique Villa. All rights reserved.
//
/*
    Programa para ordenar 3 letras dadas por el usuario
 
    Algoritmo
    1. Pedir letras 1,2 y 3
    2. Leer los inputs
    3. Ordenar las letras
    4. Imprimir las letras ordenadas
 
    Casos de prueba
    a,b,c = a,b,c
    a,c,b = a,b,c
    b,a,c = a,b,c
    b,c,a = a,b,c
    c,b,a = a,b,c
    c,a,b = a,b,c
 
*/

#include <iostream>
using namespace std;

int main() {
    char c1;
    char c2;
    char c3;
    cout << "Teclee 3 letras:" << endl;
    cin >> c1 >> c2 >> c3;
    if (c1 < c2 && c1 < c3 && c2 < c3) {
        cout << c1 << c2 << c3 << endl;
    } else {
        if (c2 < c3 && c2 < c1 && c3 < c1) {
            cout << c2 << c3 << c1 << endl;
        } else {
            if (c3 < c1 && c3 < c2 && c1 < c2) {
                cout << c3 << c1 << c2 << endl;
            } else {
                if (c1 < c2 && c1 < c3 && c3 < c2) {
                    cout << c1 << c3 << c2 << endl;
                } else {
                    if (c2 < c3 && c2 < c1 && c1 < c3) {
                        cout << c2 << c1 << c3 << endl;
                    } else {
                        cout << c3 << c2 << c1 << endl;
                    }
                }
            }
        }
    }
    return 0;
}
