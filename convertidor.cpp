//
//  main.cpp
//  Ejercicio 1
//
//  Created by Enrique Villa on 8/16/16.
//  Copyright © 2016 Enrique Villa. All rights reserved.
//
//  Programa que convierte millas a kilómetros
//
//  Algoritmo
//  1. Pedir distancia en millas
//  2. Leer millas
//  3. km = millas * 1.6
//  4. Mostrar km
//
//  Casos de prueba:
//  10 millas = 16 kilómetros

#include <iostream>
using namespace std;

int main()
{
    double dMillas;
    cout << "Teclea el valor de millas para convertir a kilómetros" << endl;
    cin >> dMillas;
    cout << "El valor de kilómetros dadas las millas es de " << dMillas * 1.6 << " kilómetros" << endl;
    return 0;
}
