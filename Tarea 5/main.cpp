//
//  main.cpp
//  Tarea 5
//
//  Created by Enrique Villa on 3/1/17.
//  Copyright © 2017 Enrique Villa. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

#include "Termino.h"

int main() {
    Termino arr[8];
    int iTerminos, iNum, iDen, iExpo;
    double dValor, dSuma = 0;
    char cVariable;
    cout << "Cantidad de términos: ";
    cin >> iTerminos;
    cout << "Variable: ";
    cin >> cVariable;
    for (int iCont = 0; iCont < iTerminos; iCont++) {
        cout << "Numerador del coeficiente del término " << iCont + 1 << ": ";
        cin >> iNum;
        cout << "Denominador del coeficiente del término " << iCont + 1 << ": ";
        cin >> iDen;
        cout << "Exponente del término " << iCont + 1 << ": ";
        cin >> iExpo;
        arr[iCont].setFraccion(iNum, iDen);
        arr[iCont].setExponente(iExpo);
        arr[iCont].setVariable(cVariable);
    }
    for (int iCont = 0; iCont < iTerminos; iCont++) {
        arr[iCont].muestra();
        cout << " ";
        if (arr[iCont + 1].getFraccion().calcValorReal() > 0 && iCont + 1 < iTerminos) {
            cout << "+ ";
        }
    }
    cout << "\nValor de x para evaluar: ";
    cin >> dValor;
    for (int iCont = 0; iCont < iTerminos; iCont++) {
        dSuma = dSuma + arr[iCont].getFraccion().calcValorReal() * pow(dValor, arr[iCont].getExponente());
    }
    cout << "El valor del polinomio es: " << dSuma << endl;
    return 0;
}
