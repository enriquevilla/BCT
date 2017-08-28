//
//  main.cpp
//  Tarea2
//
//  Created by Enrique Villa on 1/24/17.
//  Copyright © 2017 Enrique Villa. All rights reserved.
//
/*
    Programa para insertar comas a los números
 
    Algoritmo
 1. Generar un archivo .txt para que el programa la lea.
 2. El ciclo se encarga de insertar las comas en los lugares donde corresponde en los números.
 3. Al terminar el ciclo, se genera el .txt de salida con los números modificados.
 
    Casos de prueba
  999999999 -> 999,999,999
  50 -> 50
  50000 -> 50,000
  123456 -> 123,456
  2000 -> 2,000
  100 -> 100
 */

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string sNumero;
    int iComa = 0;
    ifstream archEnt;
    ofstream archSal;
    archEnt.open("numeros.txt");
    archSal.open("numeros2.txt");
    while (archEnt >> sNumero) {
        iComa = sNumero.length();
        while (iComa > 3) {
            iComa -= 3;
            sNumero.insert(iComa, ",");
        }
        archSal << sNumero << endl;
    }
    return 0;
}
