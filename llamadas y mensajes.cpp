//
//  main.cpp
//  llamadas y mensajes
//
//  Created by Enrique Villa on 8/31/16.
//  Copyright © 2016 Enrique Villa. All rights reserved.
//
/* 
    Programa para calcular costos de llamadas y mensajes entre compañías telefónicas
 
    Algoritmo
    1. Pedir los datos que se requieren para calcular los costos
    2. Pedir la cantidad de minutos o palabras
    3. Calcular costo de llamada o mensaje
    4. Imprimir el costo de llamada o mensaje
 
    Casos de prueba
    C,S,5 = 0
    C,S,10 = 200
    C,O,2 = 100
    C,F,10 = 100
    M,S,-- = 40
    M,O,81 = 300
 */

#include <iostream>
using namespace std;

int main() {
    char cCM;
    char cSOF;
    int iMin;
    double dCosto = 0.0;
    cout << "Teclee si es llamada o mensaje (C/M):" << endl;
    cin >> cCM;
    if (cCM == 'C') {
        cout << "Teclee a cual llama (S,O,F):" << endl;
        cin >> cSOF;
        cout << "Teclee la cantidad de minutos de la llamada:" << endl;
        cin >> iMin;
        if (cSOF == 'S') {
            if (iMin <= 5) {
                cout << "Costo: $ " << dCosto << endl;
            } else {
                dCosto = iMin * 20 - 100;
                cout << "Costo: $ " << dCosto << endl;
            }
        }
        if (cSOF == 'O') {
            dCosto = iMin * 50;
            cout << "Costo: $ " << dCosto << endl;
        }
        if (cSOF == 'F') {
            dCosto = 100;
            cout << "Costo: $ " << dCosto << endl;
        }
    }
    if (cCM == 'M') {
        cout << "Teclee a cual mensajea (S,O):" << endl;
        cin >> cSOF;
        if (cSOF == 'S') {
            dCosto = 40;
            cout << "Costo: $ " << dCosto << endl;
        }
        if (cSOF == 'O') {
            cout << "Teclee cuántas palabras en el mensaje:" << endl;
            cin >> iMin; //uso iMin para no dejarla vacia por si el usuario calcula precio de llamada
            dCosto = 60 * (iMin / 20);
            if (iMin % 20 < 20 && iMin % 20 > 0) {
                dCosto = dCosto + 60;
                cout << "Costo: $ " << dCosto << endl;
            } else {
                cout << "Costo: $ " << dCosto << endl;
            }
        }
    }
    return 0;
}
