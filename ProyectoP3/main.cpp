//
//  main.cpp
//  ProyectoP3
//
//  Created by Enrique Villa on 4/6/17.
//  Copyright © 2017 Enrique Villa. All rights reserved.
//

#include <iostream>
#include <fstream>
using namespace std;

#include "Material.h"

bool matDisponible(Material *listaM[20], int iCantMat, Reserva listaR[50], int iCantRes, Fecha fec1, int IDMat) {
    bool disponible = true;
    for (int iCont = 0; iCont < iCantRes && disponible == true; iCont++) {
        if (IDMat == listaR[iCont].getIDMat()) {
            for (int iCont1 = 0; iCont1 < iCantMat && disponible == true; iCont1++) {
                if (IDMat == listaM[iCont1]->getIDMat()) {
                    if (fec1 > listaR[iCont].calculaFechaFinReserva(listaM[iCont1]->cantidadDeDiasDePrestamo()) || fec1 + listaM[iCont1]->cantidadDeDiasDePrestamo() < listaR[iCont].getFechaRes()) {
                        disponible = true;
                    } else {
                        disponible = false;
                    }
                }
            }
        }
    }
    return disponible;
}

bool noTieneReserva(Material *listaM[20], int iCantMat, Reserva listaR[50], int iCantRes, Fecha fec1, int IDMat) {
    bool noTieneReserva = true;
    for (int iCont = 0; iCont < iCantRes; iCont++) {
        for (int iCont1 = 0; iCont1 < iCantMat; iCont1++) {
            if (IDMat != listaR[iCont].getIDMat() && IDMat == listaM[iCont1]->getIDMat()) {
                noTieneReserva = true;
            } else {
                return false;
            }
        }
    }
    return noTieneReserva;
}

bool existeMat(Material *listaM[20], int iCantMat, int IDMat) {
    for (int iCont = 0; iCont < iCantMat; iCont++) {
        if (listaM[iCont]->getIDMat() == IDMat) {
            return true;
        }
    }
    return false;
}

int main() {
    Material* listaMa[20];
    Reserva listaRes[50];
    Fecha fec1;
    ifstream archEntMat("materiales.txt"), archEntRes("reserva.txt");
    ofstream archSalRes;
    int IDMat, iX, dd, mm, aa, iCantRes = 0, iCantMat = 0, IDCli = 0;
    string sTitulo, sX;
    char cOpcion, cMat;
    for (int iCont = 0; archEntMat >> IDMat >> sTitulo >> cMat; iCont++) {
        if (cMat == 'L') {
            archEntMat >> iX >> sX;
            listaMa[iCont] = new Libro(IDMat, sTitulo, iX, sX);
        }
        if (cMat == 'D') {
            archEntMat >> iX;
            listaMa[iCont] = new Disco(IDMat, sTitulo, iX);
        }
        if (cMat == 'S') {
            archEntMat >> sX;
            listaMa[iCont] = new Software(IDMat, sTitulo, sX);
        }
        iCantMat++;
    }
    for (int iCont = 0; archEntRes >> dd >> mm >> aa >> IDMat >> iX; iCont++) {
        Fecha fec(dd, mm, aa);
        listaRes[iCont] = Reserva(IDMat, iX, fec);
        iCantRes++;
    }
    cin >> cOpcion;
    while (cOpcion != 'f') {
        switch (cOpcion) {
            case 'a':
                for (int iCont = 0; iCont < 20; iCont++) {
                    listaMa[iCont]->muestraDatos();
                }
                break;
            case 'b':
                for (int iCont = 0; iCont < iCantRes; iCont++) {
                    cout << "Fecha inicio: " << listaRes[iCont].getFechaRes() << "Fecha fin: ";
                    for (int iCont1 = 0; iCont1 < 20; iCont1++) {
                        if (listaRes[iCont].getIDMat() == listaMa[iCont1]->getIDMat()) {
                            cout << listaRes[iCont].calculaFechaFinReserva(listaMa[iCont1]->cantidadDeDiasDePrestamo()) << "Título: " << listaMa[iCont1]->getTitulo() << endl << "ID Cliente: " << listaRes[iCont].getIDCli() << endl << endl;
                        }
                    }
                }
                break;
            case 'c':
                cin >> IDMat;
                for (int iCont = 0; iCont < iCantMat; iCont++) {
                    if (listaMa[iCont]->getIDMat() == IDMat) {
                        for (int iCont1 = 0; iCont1 < iCantRes; iCont1++) {
                            if (listaMa[iCont]->getIDMat() == listaRes[iCont1].getIDMat()) {
                                cout << "Título : " << listaMa[iCont]->getTitulo() << endl << "Fecha inicio: " << listaRes[iCont1].getFechaRes() << "Fecha fin: " << listaRes[iCont1].calculaFechaFinReserva(listaMa[iCont]->cantidadDeDiasDePrestamo()) << endl;
                            }
                        }
                    }
                }
                break;
            case 'd':
                cin >> fec1;
                for (int iCont = 0; iCont < iCantRes; iCont++) {
                    for (int iCont1 = 0; iCont1 < 20; iCont1++) {
                        if (fec1 >= listaRes[iCont].getFechaRes()) {
                            if (listaRes[iCont].getIDMat() == listaMa[iCont1]->getIDMat() && fec1 <= listaRes[iCont].calculaFechaFinReserva(listaMa[iCont1]->cantidadDeDiasDePrestamo())) {
                                cout << "Título: " << listaMa[iCont1]->getTitulo() << endl << "ID Cliente: " << listaRes[iCont].getIDCli() << endl << endl;
                            }
                        }
                    }
                }
                break;
            case 'e':
                do {
                    cout << "id cliente:" << endl;
                    cin >> IDCli;
                    cout << "id material:" << endl;
                    cin >> IDMat;
                    cout << "fecha:" << endl;
                    cin >> fec1;
                    if (matDisponible(listaMa, iCantMat, listaRes, iCantRes, fec1, IDMat) == false || existeMat(listaMa, iCantMat, IDMat) == false) {
                        cout << "Error en la reserva, escriba otra vez el ID y fecha" << endl;
                    }
                } while (matDisponible(listaMa, iCantMat, listaRes, iCantRes, fec1, IDMat) == false || noTieneReserva(listaMa, iCantMat, listaRes, iCantRes, fec1, IDMat == false) || existeMat(listaMa, iCantMat, IDMat) == false);
                cout << "material agregado" << endl;
                listaRes[iCantRes] = *new Reserva(IDMat, IDCli, fec1);
                archSalRes.open("reserva.txt", fstream::app);
                archSalRes << endl << listaRes[iCantRes].getFechaRes().getDia() << " " << listaRes[iCantRes].getFechaRes().getMes() << " " << listaRes[iCantRes].getFechaRes().getYear() << " " << listaRes[iCantRes].getIDMat() << " " << listaRes[iCantRes].getIDCli();
                archSalRes.close();
                iCantRes++;
                break;
        }
        cin >> cOpcion;
    }
    return 0;
}
