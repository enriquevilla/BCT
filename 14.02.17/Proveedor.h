//
//  Proveedor.h
//  14.02.17
//
//  Created by Enrique Villa on 2/16/17.
//  Copyright © 2017 Enrique Villa. All rights reserved.
//

#ifndef Proveedor_h
#define Proveedor_h

class Proveedor {
public:
    Proveedor();
    Proveedor(int iNum, string sNom);
    void setNumero(int iNum);
    void setNombre(string sNom);
    int getNumero();
    string getNombre();
private:
    int iNumero;
    string sNombre;
};

Proveedor :: Proveedor() {
    iNumero = 0;
    sNombre = "";
}

Proveedor :: Proveedor(int iNum, string sNom) {
    iNumero = iNum;
    sNombre = sNom;
}

void Proveedor :: setNumero(int iNum) {
    iNumero = iNum;
}

void Proveedor :: setNombre(string sNom) {
    sNombre = sNom;
}

int Proveedor :: getNumero() {
    return iNumero;
}

string Proveedor :: getNombre() {
    return sNombre;
}

#endif /* Proveedor_h */
