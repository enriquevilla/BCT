//
//  main.cpp
//  Ejercicio 2
//
//  Created by Enrique Villa on 8/16/16.
//  Copyright © 2016 Enrique Villa. All rights reserved.
//
//  Programa para sacar precio por kilogramo
//
//  1. Pedir peso en kg
//  2. Pedir precio total
//  3. Leer peso
//  4. Leer precio total
//  5. precio por kg = precio total/peso
//  6. Mostrar precio por kg
//
//  Caso de prueba
//  20 precio total/10 kg = 2 $/kg

#include <iostream>
using namespace std;

int main() {
    double dPeso;
    double dTotal;
    cout << "Teclea el peso en kilogramos" << endl;
    cin >> dPeso;
    cout << "Teclea el precio total" << endl;
    cin >> dTotal;
    cout << "El precio por kilogramo de naranjas es de $" << dTotal/dPeso << endl;
    return 0;
}
