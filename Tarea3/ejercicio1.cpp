//
//  main.cpp
//  Tarea3
//
//  Created by Enrique Villa on 1/30/17.
//  Copyright © 2017 Enrique Villa. All rights reserved.
//
/*
    Programa para calcular el área y volumen de dos esferas
    Algoritmo
 1. Pedir el radio de la segunda esfera
 2. Imprimir todas las áreas y volúmenes
 3. Sacar e imprimir también el menor radio de las dos esferas
 */

#include <iostream>
using namespace std;

#include "Esfera.h"

int main() {
    Esfera Esf1, Esf2, EsfMenor;
    double dRad;
    Esf1.~Esfera();
    cout << "Teclee un valor para el radio: ";
    cin >> dRad;
    Esf2.setRadio(dRad);
    cout << "Radio esfera 1: " << Esf1.getRadio() << endl;
    cout << "Área esfera 1: " << Esf1.calcArea(Esf1) << endl;
    cout << "Volumen esfera 1: " << Esf1.calcVol(Esf1) << endl;
    cout << "Radio esfera 2: " << Esf2.getRadio() << endl;
    cout << "Área esfera 2: " << Esf2.calcArea(Esf2) << endl;
    cout << "Volumen esfera 2: " << Esf2.calcVol(Esf2) << endl;
    //Estas 2 líneas no me funcionan por un error
    //EsfMenor = Esf1.menor(Esf2);
    //cout << "La esfera más pequeña tiene un radio de " << EsfMenor.getRadio() << endl;
    cout << "La esfera más pequeña tiene un radio de " << Esf1.menor(Esf2).getRadio() << endl;
    return 0;
}
