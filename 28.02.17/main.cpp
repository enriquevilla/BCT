//
//  main.cpp
//  28.02.17
//
//  Created by Enrique Villa on 2/28/17.
//  Copyright © 2017 Enrique Villa. All rights reserved.
//

#include <iostream>
using namespace std;

#include "Taxi.h"

int main() {
    Taxi arr[20];
    Persona taxista;
    string sNom, sNumCel;
    int iIdent, iTaxis = 0;
    char cOpcion, cSeguir;
    cout << "Inserta los datos de un taxi" << endl;
    for (int iCont = 0; cSeguir != 'n'; iCont++) {
        cout << "Taxi " << iCont + 1 << endl;
        cout << "Nombre: ";
        cin >> sNom;
        cout << "Número de celular: ";
        cin >> sNumCel;
        cout << "ID: ";
        cin >> iIdent;
        taxista.setNombre(sNom);
        taxista.setNumCel(sNumCel);
        arr[iCont].setResponsable(taxista);
        arr[iCont].setIdent(iIdent);
        cout << "¿Seguir? (s, n) ";
        cin >> cSeguir;
        iTaxis++;
    }
    cout << "a) lista\nb) taxis a un nombre\nc) agregar taxi\n d) modificar celular\ne) terminar" << endl;
    cin >> cOpcion;
    while (cOpcion != 'e') {
        switch (cOpcion) {
            case 'a':
                for (int iCont = 0; iCont < iTaxis; iCont++) {
                    cout << iCont + 1 << arr[iCont].getResponsable().getNombre() << "\t" << arr[iCont].getResponsable().getNumCel() << "\t" << arr[iCont].getIdent() << endl;
                }
                break;
            case 'b':
                cout << "Nombre: ";
                cin >> sNom;
                for (int iCont = 0; iCont < iTaxis; iCont++) {
                    if (sNom == arr[iCont].getResponsable().getNombre()) {
                        cout << iCont + 1 << "\t" << arr[iCont].getResponsable().getNombre() << "\t" << arr[iCont].getResponsable().getNumCel() << "\t" << arr[iCont].getIdent() << endl;
                    }
                }
                break;
            case 'c':
                cout << "Taxi " << iTaxis + 1 << endl;
                cout << "Nombre: ";
                cin >> sNom;
                cout << "Número de celular: ";
                cin >> sNumCel;
                cout << "ID: ";
                cin >> iIdent;
                taxista.setNombre(sNom);
                taxista.setNumCel(sNumCel);
                arr[iTaxis].setResponsable(taxista);
                arr[iTaxis].setIdent(iIdent);
                iTaxis++;
                cout << "Taxi agregado" << endl;
                break;
            case 'd':
                string nuevoCel;
                Persona resp;
                cout << "Nombre: ";
                cin >> sNom;
                cout << "Celular: ";
                cin >> nuevoCel;
                for (int iCont = 0; iCont < iTaxis; iCont++) {
                    if (sNom == arr[iCont].getResponsable().getNombre()) {
                        resp = arr[iCont].getResponsable();
                        resp.setNumCel(nuevoCel);
                        arr[iCont].setResponsable(resp);
                    }
                }
                cout << "Celular modificado" << endl;
                break;
        }
        cout << "Opción: ";
        cin >> cOpcion;
    }
    return 0;
}
