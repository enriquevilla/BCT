//
//  main.cpp
//  Azulejos
//
//  Created by Enrique Villa on 8/26/16.
//  Copyright © 2016 Enrique Villa. All rights reserved.
//
/*
 
 Datos de entrada
 tipo cliente, tipo azulejo, cantidad a comprar
 Datos de salida
 precio, descuento, total
 
 Algoritmo
    1. Pedir tipos de cliente, azulejo y cant de artículos
    2. Leer todos los datos que se pidieron
    3. Calcular subtotal
    4. Calcular descuento
    5. Calcular total
    6. Desplegar subtotal, descuento, total
 
 Casos de prueba
    tipoCl  tipoAz  Cantidad    Precio  Desc    Total
    N       L       3           18      0       18
    N       E       1000        4000    400     3600
    N       S       3000        6000    900     5100
    F       L       500         3000    600     2400
 */

#include <iostream>
using namespace std;

int main() {
    char cTipoCl;
    char cTipoAz;
    int iCantidad;
    double dSubtotal = 0.0;
    double dTotal;
    cout << "Teclee el tipo de cliente (N o F):" << endl;
    cin >> cTipoCl;
    cout << "Teclee el tipo de azulejo (L, E o S):" << endl;
    cin >> cTipoAz;
    cout << "Teclee la cantidad de artículos:" << endl;
    cin >> iCantidad;
    if (cTipoAz == 'L') {
        dSubtotal = iCantidad * 6;
    } else {
        if (cTipoAz == 'E') {
            dSubtotal = iCantidad * 4;
        } else {
            if (cTipoAz == 'S') {
                dSubtotal = iCantidad * 2;
            }
        }
    }
    if (cTipoCl == 'F') {
        dTotal = dSubtotal * 0.8;
    } else {
        if (cTipoCl == 'N' && dSubtotal >= 2000 && dSubtotal < 5000) {
            dTotal = dSubtotal * 0.9;
        } else {
            if (cTipoCl == 'N' && dSubtotal >= 5000) {
                dTotal = dSubtotal * 0.85;
            } else {
                dTotal = dSubtotal;
            }
        }
    }
    cout << "El subtotal es de:          $ " << dSubtotal << endl;
    cout << "El descuento es de:         $ " << dSubtotal - dTotal << endl;
    cout << "El total es de:             $ " << dTotal << endl;
    return 0;
}
