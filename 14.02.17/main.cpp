//
//  main.cpp
//  14.02.17
//
//  Created by Enrique Villa on 2/14/17.
//  Copyright © 2017 Enrique Villa. All rights reserved.
//

#include <iostream>
#include <fstream>
using namespace std;

#include "Articulo.h"
#include "Proveedor.h"

void cargaArticulos(Articulo lista[], int &iTam) {
    ifstream archArt("articulos.txt");
    int iClave, iNumPro;
    string sDesc;
    double dPrecio;
    while (archArt >> iClave >> dPrecio >> iNumPro) {
        getline(archArt, sDesc);
        lista[iTam].setClave(iClave);
        lista[iTam].setPrec(dPrecio);
        lista[iTam].setNumPro(iNumPro);
        lista[iTam].setDesc(sDesc);
        iTam++;
    }
    archArt.close();
}

void muestraArticulos(Articulo lista[], int iTam) {
    for (int iCont = 0; iCont < iTam; iCont++) {
        cout << lista[iCont].getClave() << " " << lista[iCont].getPrec() << " " << lista[iCont].getNumPro() << " " << lista[iCont].getDesc() << endl;
    }
}

void cargaProveedores(Proveedor lista[], int &iTam) {
    ifstream archPro("proveedores.txt");
    int iNumPro;
    string sPro;
    while (archPro >> iNumPro) {
        getline(archPro, sPro);
        lista[iTam].setNumero(iNumPro);
        lista[iTam].setNombre(sPro);
        iTam++;
    }
    archPro.close();
}

void muestraProveedores(Proveedor lista[], int iTam) {
    for (int iCont = 0; iCont < iTam; iCont++) {
        cout << lista[iCont].getNumero() << " " << lista[iCont].getNombre() << endl;
    }
}

void busca(Articulo artlista[], Proveedor prolista[], int iClave, int iTam1, int iTam2) {
    bool bFind = false;
    for (int iCont = 0; iCont < iTam1; iCont++) {
        bFind = false;
        for (int iCont2 = 0; iCont2 < iTam2; iCont2++) {
            if (artlista[iCont].getNumPro() == prolista[iCont2].getNumero()) {
                bFind = true;
                if (bFind == true) {
                    cout << artlista[iCont].getClave() << " " << artlista[iCont].getPrec() << " " << artlista[iCont].getNumPro() << artlista[iCont].getDesc() << endl;
                }
            }
        }
        if (bFind == false) {
            cout << "Error en el artículo" << artlista[iCont].getDesc() << ";falta de proveedor." << endl;
        }
    }
}

int main() {
    Articulo ArtArr[20];
    Proveedor ProArr[20];
    string sDesc, sPro;
    int iClave, iPrecio, iNumPro, iSizeArt = 0, iSizePro = 0;
    ifstream archEnt, archEnt2;
    ofstream archSal;
    archEnt.open("articulos.txt");
    archEnt2.open("proveedores.txt");
    while (archEnt >> iClave >> iPrecio >> iNumPro) {
        while (getline(archEnt, sDesc)) {
            iSizeArt++;
        }
    }
    while (archEnt2 >> iNumPro) {
        while (getline(archEnt2, sPro)) {
            iSizePro++;
        }
    }
    cargaArticulos(ArtArr, iSizeArt);
    cargaProveedores(ProArr, iSizePro);
    busca(ArtArr, ProArr, iClave, iSizeArt, iSizePro);
    return 0;
}
