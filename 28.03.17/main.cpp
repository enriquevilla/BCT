//
//  main.cpp
//  28.03.17
//
//  Created by Enrique Villa on 3/30/17.
//  Copyright © 2017 Enrique Villa. All rights reserved.
//

#include <iostream>
using namespace std;

#include "Chequera.h"

int main()
{
    CtaBanc *listaCtas[20];
    int sizeCtas;
    char tipoCta;
    int numCta;
    double saldoI, com, dinero;
    char opcion;
    
    cout << "Cuantas cuentas bancarias hay? ";
    cin >> sizeCtas;
    
    for (int c = 0; c < sizeCtas; c++)
    {
        cout << "quieres una cuenta bancaria o de cheques? (b ó c) ";
        cin >> tipoCta;
        
        cout << "Numero de cuenta? ";
        cin >> numCta;
        
        cout << "Saldo inicial? ";
        cin >> saldoI;
        
        if (tipoCta == 'c')
        {
            cout << "Comision por hacer retiro? ";
            cin >> com;
            listaCtas[c] = new Chequera(numCta, saldoI, com);
        } else listaCtas[c] = new CtaBanc(numCta,saldoI);
        
    }
    
    do
    {
        cout << "Menu de opciones " << endl;
        cout << endl;
        cout << "a) depositar " << endl;
        cout << "b) retirar " << endl;
        cout << "c) consultar saldo " << endl;
        cout << "d) terminar " << endl;
        cout << "opcion ->";
        cin >> opcion;
        
        switch (opcion) {
            case 'a':
            {
                cout << "teclea el numero de cuenta ";
                cin >> numCta;
                cout << "cuando vas a depositar? ";
                cin >> dinero;
                for (int iCont = 0; iCont < sizeCtas; iCont++) {
                    if (listaCtas[iCont]->getNumCuenta() == numCta) {
                        listaCtas[iCont]->deposita(dinero);
                    }
                }
                break;
            }
                
            case 'b':
            {
                cout << "teclea el numero de cuenta ";
                cin >> numCta;
                cout << "cuando vas a retirar? ";
                cin >> dinero;
                for (int iCont = 0; iCont < sizeCtas; iCont++) {
                    if (listaCtas[iCont]->getNumCuenta() == numCta) {
                        listaCtas[iCont]->retira(dinero);
                    }
                }
                break;
            }
                
            case 'c':
            {
                cout << "teclea el numero de cuenta ";
                cin >> numCta;
                for (int iCont = 0; iCont < sizeCtas; iCont++) {
                    if (listaCtas[iCont]->getNumCuenta() == numCta) {
                        listaCtas[iCont]->mostrar();
                    }
                }
                break;
            }
        }
        
    } while (opcion != 'd');
    
    return 0;
}

