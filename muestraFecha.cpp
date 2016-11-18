//
//  main.cpp
//  tarea6
//
//  Created by Enrique Villa on 10/12/16.
//  Copyright © 2016 Enrique Villa. All rights reserved.
//
/*
 
 Programa para mostrar una fecha de inicio y terminación
 
    Algoritmo
 1. Pedir y leer fecha de inicio
 2. Pedir y leer fecha de terminación
 3. Llamar a la función para que imprima las fechas
 
 Caso de prueba
 1/1/1997, 10/10/2016 -> Fecha inicio: 1 de enero de 1997, Fecha terminación 10 de octubre de 2016
 
*/

#include <iostream>
using namespace std;

void muestraFecha(int iD, int iM, int iA, int iD2, int iM2, int iA2) {
    switch (iM) {
        case 1:
            cout << "La fecha de inicio es: " << iD << " de enero de " << iA << endl;
            break;
        case 2:
            cout << "La fecha de inicio es: " << iD << " de febrero de " << iA << endl;
            break;
        case 3:
            cout << "La fecha de inicio es: " << iD << " de marzo de " << iA << endl;
            break;
        case 4:
            cout << "La fecha de inicio es: " << iD << " de abril de " << iA << endl;
            break;
        case 5:
            cout << "La fecha de inicio es: " << iD << " de mayo de " << iA << endl;
            break;
        case 6:
            cout << "La fecha de inicio es: " << iD << " de junio de " << iA << endl;
            break;
        case 7:
            cout << "La fecha de inicio es: " << iD << " de julio de " << iA << endl;
            break;
        case 8:
            cout << "La fecha de inicio es: " << iD << " de agosto de " << iA << endl;
            break;
        case 9:
            cout << "La fecha de inicio es: " << iD << " de septiembre de " << iA << endl;
            break;
        case 10:
            cout << "La fecha de inicio es: " << iD << " de octubre de " << iA << endl;
            break;
        case 11:
            cout << "La fecha de inicio es: " << iD << " de noviembre de " << iA << endl;
            break;
        case 12:
            cout << "La fecha de inicio es: " << iD << " de septiembre de " << iA << endl;
            break;
        default:
            break;
    }
    switch (iM2) {
        case 1:
            cout << "La fecha de terminación es: " << iD2 << " de enero de " << iA2 << endl;
            break;
        case 2:
            cout << "La fecha de terminación es: " << iD2 << " de febrero de " << iA2 << endl;
            break;
        case 3:
            cout << "La fecha de terminación es: " << iD2 << " de marzo de " << iA2 << endl;
            break;
        case 4:
            cout << "La fecha de terminación es: " << iD2 << " de abril de " << iA2 << endl;
            break;
        case 5:
            cout << "La fecha de terminación es: " << iD2 << " de mayo de " << iA2 << endl;
            break;
        case 6:
            cout << "La fecha de terminación es: " << iD2 << " de junio de " << iA2 << endl;
            break;
        case 7:
            cout << "La fecha de terminación es: " << iD2 << " de julio de " << iA2 << endl;
            break;
        case 8:
            cout << "La fecha de terminación es: " << iD2 << " de agosto de " << iA2 << endl;
            break;
        case 9:
            cout << "La fecha de terminación es: " << iD2 << " de septiembre de " << iA2 << endl;
            break;
        case 10:
            cout << "La fecha de terminación es: " << iD2 << " de octubre de " << iA2 << endl;
            break;
        case 11:
            cout << "La fecha de terminación es: " << iD2 << " de noviembre de " << iA2 << endl;
            break;
        case 12:
            cout << "La fecha de terminación es: " << iD2 << " de septiembre de " << iA2 << endl;
            break;
        default:
            break;
    }
};
int main() {
    int iD1, iM1, iA1, iD2, iM2, iA2;
    cin >> iD1; // dia1
    cin >> iM1; // mes1
    cin >> iA1; // año1
    cin >> iD2; // dia2
    cin >> iM2; // mes2
    cin >> iA2; // año2
    muestraFecha(iD1, iM1, iA1, iD2, iM2, iA2);
        return 0;
}
