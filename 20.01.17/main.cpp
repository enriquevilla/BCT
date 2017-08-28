//
//  main.cpp
//  20.01.17
//
//  Created by Enrique Villa on 1/20/17.
//  Copyright © 2017 Enrique Villa. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main() {
    int iClave, iCant, iProd, iRun;
    double dPrec;
    cout << "input(1),output(2): ";
    cin >> iRun;
    if (iRun == 1) {
        ofstream archivoSalida;
        archivoSalida.open("datos.txt");
        cout << "Cantidad de productos: ";
        cin >> iProd;
        for (int iCont = 0; iCont < iProd; iCont++) {
            cout << "Clave del artículo: ";
            cin >> iClave;
            cout << "Cantidad de artículos: ";
            cin >> iCant;
            cout << "Precio del artículo: ";
            cin >> dPrec;
            archivoSalida << iClave << " ";
            archivoSalida << iCant << " ";
            archivoSalida << dPrec << endl;
        }
    }
    if (iRun == 2) {
        ifstream archivoEntrada;
        archivoEntrada.open("datos.txt");
        int x;
        double dTotal;
        cout << "Clave \t Cantidad \t Precio Unitario \t Precio" << endl;
        for (int iCont = 0; iCont < 3; iCont++) {
            while (archivoEntrada >> x) {
                cout << x << setw(4);
                }
            cout << dPrec * iCant << endl;
        }
        cout << endl;
        archivoEntrada.close();
    }
    return 0;
}
