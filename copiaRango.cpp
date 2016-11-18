//
//  main.cpp
//  tarea7p2
//
//  Created by Enrique Villa on 10/27/16.
//  Copyright © 2016 Enrique Villa. All rights reserved.
//
/*
    Programa para sacar números dentro de un rango de un arreglo

    Algoritmo
 1. Pedir y leer el tamaño del arreglo A
 2. Pedir y leer los valores para llenar el arreglo A
 3. Pedir y leer los límites
 4. Llamar a la función para encontrar y colocar los valores en el arreglo B y su tamaño
 5. Imprimir el arreglo B y su tamaño
 6. Preguntar si quiere hacerlo otra vez
 
    Casos de prueba
 iTamA = 4/ iArrA[] = 2,8,5,7/ iLimInf = 5/ iLimSup = 7/ iArrB[] = 5,7/ iTamB = 2
 
 */

#include <iostream>
using namespace std;

void copiaRango(int iArrA[], int iTamA, int iLimInf, int iLimSup, int iArrB[], int &iTamB) {
    for (int iContA = 0, iContB = 0; iContA < iTamA; iContA++) {
        if (iArrA[iContA] >= iLimInf && iArrA[iContA] <= iLimSup) { //si el número está entre los rangos
            iArrB[iContB] = iArrA[iContA]; //ese número se coloca en el arreglo B
            iContB++;
            iTamB++;
        }
    }
}

int main() {
    int iArrA[100], iTamA, iLimInf, iLimSup, iArrB[100], iTamB = 0;
    for (char cCont = 's'; cCont == 's';) {
        cout << "Teclee el tamaño del arreglo A: " << endl;
        cin >> iTamA;
        for (int iCont = 0; iCont < iTamA; iCont++) {
            cout << "Teclee el valor " << iCont << ":" << endl;
            cin >> iArrA[iCont];
        }
        cout << "Indique el límite inferior:" << endl;
        cin >> iLimInf;
        cout << "Indique el límite superior:" << endl;
        cin >> iLimSup;
        copiaRango(iArrA, iTamA, iLimInf, iLimSup, iArrB, iTamB);
        cout << "Los valores del arreglo B son:" << endl;
        for (int iCont = 0; iCont < iTamB; iCont++) {
            cout << iArrB[iCont] << endl;
        }
        cout << "El tamaño del arreglo B es de " << iTamB << endl;
        iTamB = 0;
        cout << "Desea realizar otro arreglo? (s/n)" << endl;
        cin >> cCont;
    }
    return 0;
}
