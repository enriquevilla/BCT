//
//  main.cpp
//  Tarea 4
//
//  Created by Enrique Villa on 2/16/17.
//  Copyright © 2017 Enrique Villa. All rights reserved.
//
//  Programa para calcular el sueldo de empleados
//
//     Algoritmo
//  1. Mostrar menu y pedir opción
//  2. Realizar esa opción
//  3. Pedir otra opción hasta que se teclee una f

#include <iostream>
#include <fstream>
using namespace std;

#include "Empleado.h"

void existeID(bool existe, int iSizeEmp, int &objeto, int iID, Empleado arr[20]) {
    while (existe != true) {
        while (objeto < iSizeEmp && existe != true) {
            if (iID == arr[objeto].getID()) {
                existe = true;
            }
            if (existe != true) {
                objeto++;
            }
        }
        if (existe == false) {
            cout << "ID inválida, teclee una ID correcta: ";
            cin >> iID;
            objeto = 0;
        }
    }
}

void validarCant(int iCant) {
    while (iCant < 0) {
        cout << "Cantidad inválida, teclee una cantidad correcta: ";
        cin >> iCant;
    }
}
int main() {
    Empleado arr[20];
    char cOpcion;
    double dSuel = -1, dSuel2 = -1;
    int iID = 0, iHr = 0, objeto = 0, iSizeEmp = 0;
    bool existe = false;
    ifstream archEnt("empleados.txt");
    while (archEnt >> iID >> dSuel >> dSuel2 >> iHr) {
        arr[objeto].setID(iID);
        arr[objeto].setHoras(iHr);
        arr[objeto].setSueldo(dSuel);
        arr[objeto].setSpH(dSuel2);
        objeto++;
        iSizeEmp++;
    }
    objeto = 0;
    cout << "a) Modificar sueldo fijo\nb) Modificar sueldo por hora\nc) Registrar horas trabajadas\nd) Calcular pago del empleado\ne) Ver lista de empleados\nf) Terminar" << endl;
    cout << "¿Qué opción desea? ";
    cin >> cOpcion;
    cOpcion = tolower(cOpcion);
    while (cOpcion != 'f') {
        switch (cOpcion) {
            case 'a':
                cout << "\nModificar sueldo fijo\n\nID del empleado: ";
                cin >> iID;
                existeID(existe, iSizeEmp, objeto, iID, arr);
                cout << "Teclee el nuevo sueldo fijo: ";
                cin >> dSuel;
                validarCant(dSuel);
                arr[objeto].setSueldo(dSuel);
                cout << "Cambio realizado exitosamente" << endl;
                existe = false;
                objeto = 0;
                break;
            case 'b':
                cout << "\nModificar sueldo por hora\n\nID del empleado: ";
                cin >> iID;
                existeID(existe, iSizeEmp, objeto, iID, arr);
                cout << "Teclee el nuevo sueldo por hora: ";
                cin >> dSuel;
                validarCant(dSuel);
                arr[objeto].setSpH(dSuel);
                cout << "Cambio realizado exitosamente" << endl;
                existe = false;
                objeto = 0;
                break;
            case 'c':
                cout << "\nRegistrar horas trabajadas\n\nID del empleado: ";
                cin >> iID;
                existeID(existe, iSizeEmp, objeto, iID, arr);
                cout << "Teclee la cantidad de horas para registar: ";
                cin >> iHr;
                validarCant(iHr);
                arr[objeto].registrarHoras(iHr);
                cout << "Cambio realizado exitosamente" << endl;
                existe = false;
                objeto = 0;
                break;
            case 'd':
                cout << "\nCalcular pago del empleado\n\nID del empleado: ";
                cin >> iID;
                existeID(existe, iSizeEmp, objeto, iID, arr);
                cout << "Cantidad a pagar: " << arr[objeto].calcularPago() << endl;
                existe = false;
                objeto = 0;
                break;
            case 'e':
                cout << "\nLista de empleados:\n\n";
                for (int iCont = 0; iCont < iSizeEmp; iCont++) {
                    cout << arr[iCont].getID() << " " << arr[iCont].getSueldo() << " " << arr[iCont].getSpH() << " " << arr[iCont].getHoras() << " " << arr[iCont].calcularPago() << endl;
                }
                break;
        }
        cout << "¿Qué opción desea? ";
        cin >> cOpcion;
        cOpcion = tolower(cOpcion);
    }
    return 0;
}
