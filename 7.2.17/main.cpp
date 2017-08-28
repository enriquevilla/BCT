//
//  main.cpp
//  7.2.17
//
//  Created by Enrique Villa on 2/7/17.
//  Copyright © 2017 Enrique Villa. All rights reserved.
//

#include <iostream>
using namespace std;

#include "Reloj.h"

int main() {
    Reloj hrInicial, hrFinal;
    int iHora, iMinutos;
    cout << "Hora inicial: ";
    cin >> iHora;
    hrInicial.setHora(iHora);
    cout << "Minutos iniciales: ";
    cin >> iMinutos;
    hrInicial.setMinu(iMinutos);
    cout << "Hora final: ";
    cin >> iHora;
    hrFinal.setHora(iHora);
    cout << "Minutos finales: ";
    cin >> iMinutos;
    hrFinal.setMinu(iMinutos);
    cout << "Hora inicial: ";
    hrInicial.muestra();
    cout << "Hora final: ";
    hrFinal.muestra();
    return 0;
}
