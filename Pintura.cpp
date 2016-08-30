//
//  main.cpp
//  Tarea de Programación 1 ej2
//
//  Created by Enrique Villa on 8/19/16.
//  Copyright © 2016 Enrique Villa. All rights reserved.
//
/*
    Programa para calcular el área para pintar de un cuarto y la cantidad necesaria de pintura
 
    1. Pedir ancho en mts
    2. Pedir largo en mts
    3. Pedir alto en mts
    4. Pedir área cubierta por pintura
    5. Usar formula de área de superficie de un prisma rectangular y restar áreas no pintadas
    6. Con el área que se pinta la dividimos entre los metros que cubre la pintura para sacar los litros.
 
    Casos de prueba
    Ancho = 5
    Largo = 4
    Alto = 3
    Metros cubiertos = 9
    Área para pintar = 54
    Litros que se ocupan = 6
 
 */
#include <iostream>
using namespace std;

int main() {
    double dAncho;
    double dLargo;
    double dAlto;
    double dMts2;
    double dMtsP;
    cout << "Introduce el ancho del cuarto en metros:" << endl;
    cin >> dAncho;
    cout << "Introduce el largo del cuarto en metros:" << endl;
    cin >> dLargo;
    cout << "Introduce el alto del cuarto en metros:" << endl;
    cin >> dAlto;
    cout << "Introduce los m2 que se cubren con un litro de pintura:" << endl;
    cin >> dMts2;
    
    dMtsP = 2 * (dAncho * dLargo + dAncho * dAlto + dLargo * dAlto) - 2 * (dLargo * dAncho);
    
    cout << "Los metros cuadrados que se pintan son: " << dMtsP << " m^2" << endl;
    cout << "Los litros necesarios para pintar son: " << dMtsP / dMts2 << " L" << endl;
    return 0;
}
