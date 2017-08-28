//
//  main.cpp
//  27.01.17
//
//  Created by Enrique Villa on 1/27/17.
//  Copyright © 2017 Enrique Villa. All rights reserved.
//

#include <iostream>
using namespace std;

#include "CtaBanc.h"

int main() {
    string sNom;
    double dDeposita, dRetira, dSal;
    CtaBanc cuenta(dSal, sNom);
    char cOpcion;
    cuenta.setNombre("Cliente");
    cuenta.setSaldo(0);
    do {
        cout << "a) Depositar b) Retirar c) Consultar saldo d) Terminar: ";
        cin >> cOpcion;
        cOpcion = tolower(cOpcion);
        switch (cOpcion) {
            case 'a':
                cout << "Cantidad a depositar: ";
                cin >> dDeposita;
                cuenta.depositaSaldo(dDeposita);
                break;
            case 'b':
                cout << "Cantidad a retirar: ";
                cin >> dRetira;
                if (cuenta.retiraSaldo(dRetira) == false) {
                    cout << "No hay saldo suficiente" << endl;
                } else {
                    cout << "Retiro exitoso, su saldo es de: " << cuenta.getSaldo() << endl;
                }
                break;
            case 'c':
                cout << "El saldo de " << cuenta.getNombre() << " es de " << cuenta.getSaldo() << endl;
                break;
        }
    } while (cOpcion != 'd');
    return 0;
}
