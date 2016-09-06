//
//  main.cpp
//  Tarea de Programación 3
//
//  Created by Enrique Villa on 9/4/16.
//  Copyright © 2016 Enrique Villa. All rights reserved.
//
/*
 Programa para convertir tiempo a segundos
 
    Algoritmo
    1. Establecer la función que realice el cálculo
    2. Pedir cantidad de horas, minutos y segundos
    3. Leer los inputs
    4. Llamar la función como equivalencia de una variable local
    5. Imprimir el resultado asignado a esa variable local
 
    Caso de prueba
    2 horas, 20 minutos, 8 segundos = 8408 segundos
 
 */

#include <iostream>
using namespace std;

int equivalente(int iHrs, int iMins, int iSeg)
{
    iSeg = iHrs * 3600 + iMins * 60 + iSeg;
    return iSeg;
}
int main() {
    int iHoras, iMinutos, iSegundos;
    cout << "Teclee la cantidad de horas seguido por los minutos y luego segundos:" << endl;
    cin >> iHoras >> iMinutos >> iSegundos;
    iSegundos = equivalente(iHoras, iMinutos, iSegundos);
    cout << iSegundos << " segundos" << endl;
    return 0;
}
