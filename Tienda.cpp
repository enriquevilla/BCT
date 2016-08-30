//
//  main.cpp
//  Tarea de Programación 1
//
//  Created by Enrique Villa on 8/19/16.
//  Copyright © 2016 Enrique Villa. All rights reserved.
//
//  Programa para calcular subtotal, IVA, total y cambio
//
//  Algoritmo
//  1. Pedir precio
//  2. Pedir cantidad de artículos
//  3. Calcular subtotal: precio * artículos
//  4. Calcular IVA: precio * artículos * 0.16
//  5. Calcular total: precio * artículos * 1.16
//  6. Pedir cantidad de pago
//  7. Calcular cambio: efectivo - precio * artículos * 1.16
//
//  Casos de prueba
//  Precio = 30.00
//  Artículos = 10.00
//  Subtotal = 300.00
//  IVA = 48.00
//  Total = 348.00
//  Efectivo = 400.00
//  Cambio = 52.00

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double dPrecio;
    int iArticulo;
    double dEfectivo;
    cout << fixed << setprecision(2);
    cout << "\t\t\t  Tienda la Computadora Feliz" << endl;
    cout << "Teclea el precio del artículo:"<< endl;
    cin >> dPrecio;
    cout << "Precio unitario del artículo a llevar:   $\t\t " << dPrecio << endl;
    cout << "Teclea la cantidad de artículos:"<< endl;
    cin >> iArticulo;
    cout << "Cantidad de artículos a llevar:\t\t\t\t\t  " << iArticulo << endl;
    cout << "Subtotal:\t\t\t\t\t\t\t\t $\t\t" << dPrecio * iArticulo << endl;
    cout << "IVA(16%):\t\t\t\t\t\t\t\t $       " << dPrecio * iArticulo * 0.16 << endl;
    cout << "Total:\t\t\t\t\t\t\t\t     $\t\t" << dPrecio * iArticulo * 1.16 << endl;
    
    cout << "Cantidad a pagar en efectivo:" << endl;
    cin >> dEfectivo;
    cout << "Cantidad en efectivo:\t\t\t\t\t $\t\t" << dEfectivo << endl;
    cout << "Cambio:\t\t\t\t\t\t\t\t\t $       " << dEfectivo - dPrecio * iArticulo * 1.16 << endl;
        ;
    return 0;
}
