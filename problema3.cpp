//
//  main.cpp
//  problema3
//
//  Created by Enrique Villa on 9/4/16.
//  Copyright © 2016 Enrique Villa. All rights reserved.
//
/*
    Programa que calcula el área de las paredes y techo de una bodega cuadrada
 
    Algoritmo
    1. Escribir la función que calcula el area de un cuadro con el lado dado
    2. Pedir al usuario el largo del cuadro
    3. Leer el largo del cuadro
    4. Llamar la función para calcular el área del cuadro
    5. Imprimir el área de las paredes y el techo
 
    Caso de prueba
    5 = 100, 25
 
 */
#include <iostream>
using namespace std;

double area(double dLargo)
{
    return dLargo * dLargo;
}
int main() {
    double dLado;
    cout << "Teclee el largo del cuadro:" << endl;
    cin >> dLado;
    dLado = area(dLado);
    cout << "El área total de las paredes de la bodega es: " << dLado * 4 << endl;
    cout << "El área total del techo de la bodega es: " << dLado << endl;
    return 0;
}