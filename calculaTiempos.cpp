//
//  main.cpp
//  calculaTiempos
//
//  Created by Enrique Villa on 10/14/16.
//  Copyright © 2016 Enrique Villa. All rights reserved.
//
/*
    Programa para calcular la hora después de ciertos minutos
 
   Algoritmo
1. Pedir y leer horas y minutos
2. Pedir el tiempo que pasa en minutos dentro del loop
3. Llamar a la función dentro del loop para calcular el tiempo después de los minutos dados
4. Imprimir cada tiempo después de realizar la función
5. Pedir si hay más procesos con un char s o n
6. Imprimir el tiempo final y la cantidad de procesos
 
    Casos de prueba
    Inicial: 23:30, tiempo ag: 30, más proc: n, final: 00:00, procesos: 1.
    Inicial: 00:00, tiempo ag: 120, más proc: s, tiempo ag: 60, más proc: n, final: 3:00, procesos: 2.
 */

#include <iostream>
using namespace std;

void calculaTiempos(int &iM, int &iH, int iT) {
    iM = iM + iT;
    iH = iH + (iM / 60);
    iM = iM % 60;
    if (iH >= 24) {
        iH = iH - 24;
    }
    switch (iM) {
        case 60:
            iM = 0;
            break;
        default:
            break;
    }
}
int main() {
    int iM, iH, iTiempo, iCont = 0;
    cin >> iH;
    cin >> iM;
    for (char cC = 's'; cC == 's'; iCont++) {
        cout << "Teclea el tiempo que se tardará el proceso ";
        cin >> iTiempo;
        calculaTiempos(iM, iH, iTiempo);
        if (iH == 0 && iM < 10) {
            cout << "La máquina terminará este proceso a las " << iH << iH << ":0" << iM << endl;
        } else if (iH == 0) {
            cout << "La máquina terminará este proceso a las " << iH << iH << ":" << iM << endl;
        } else if (iM < 10) {
            cout << "La máquina terminará este proceso a las " << iH << ":0" << iM << endl;
        } else {
            cout << "La máquina terminará este proceso a las " << iH << ":" << iM << endl;
        }
        cout << "Hay más procesos? ";
        cin >> cC; // s = sí, n = no
    }
    if (iH == 0 && iM < 10) {
        cout << "La máquina se apagará a las " << iH << iH << ":0" << iM << endl;
    } else if (iH == 0) {
        cout << "La máquina se apagará a las " << iH << iH << ":" << iM << endl;
    } else if (iM <= 10) {
        cout << "La máquina se apagará a las " << iH << ":0" << iM << endl;
    } else {
    cout << "La máquina se apagará a las " << iH << ":" << iM << endl;
    }
    cout << "Y realizó " << iCont << " procesos." << endl;
    return 0;
}
