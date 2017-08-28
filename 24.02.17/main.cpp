//
//  main.cpp
//  24.02.17
//
//  Created by Enrique Villa on 2/24/17.
//  Copyright © 2017 Enrique Villa. All rights reserved.
//

#include <iostream>
using namespace std;

#include "Evento.h"

int main() {
    Evento arr[20];
    int iCant, iDur, iHr, iMin;
    Reloj RelojEv;
    string sAsunto;
    cout << "Teclee la cantidad de eventos: ";
    cin >> iCant;
    for (int iCont = 0; iCont < iCant; iCont++) {
        cout << "Evento " << iCont + 1 << endl;
        cout << "Hora(hr min): ";
        cin >> iHr >> iMin;
        cout << "Duración: ";
        cin >> iDur;
        cout << "Asunto: ";
        cin >> sAsunto;
        RelojEv.setHora(iHr);
        RelojEv.setMinu(iMin);
        arr[iCont].setInicio(RelojEv);
        arr[iCont].setDuracion(iDur);
        arr[iCont].setAsunto(sAsunto);
    }
    for (int iCont = 0; iCont < iCant; iCont++) {
        cout << iCont + 1 << ". " << arr[iCont].getInicio().getHora() << ":" << arr[iCont].getInicio().getMinu() << " " << arr[iCont].getDuracion() << " " << arr[iCont].getAsunto() << endl;
    }
    return 0;
}
