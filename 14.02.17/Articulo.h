//
//  Articulo.h
//  14.02.17
//
//  Created by Enrique Villa on 2/14/17.
//  Copyright © 2017 Enrique Villa. All rights reserved.
//

#ifndef Articulo_h
#define Articulo_h

class Articulo {
public:
    Articulo();
    Articulo(int iCla, int iNumPro, string sDesc, double dPrec);
    void setClave(int iCla);
    void setNumPro(int iNumPro);
    void setDesc(string sDesc);
    void setPrec(double dPrec);
    int getClave();
    int getNumPro();
    string getDesc();
    double getPrec();
private:
    int iClave, iNumProveedor;
    string sDescripcion;
    double dPrecio;
};

Articulo :: Articulo () {
    iClave = 0;
    iNumProveedor = 0;
    sDescripcion = "";
    dPrecio = 0.0;
}

Articulo :: Articulo(int iCla, int iNumPro, string sDesc, double dPrec) {
    iClave = iCla;
    iNumProveedor = iNumPro;
    sDescripcion = sDesc;
    dPrecio = dPrec;
}

void Articulo :: setClave(int iCla) {
    iClave = iCla;
}

void Articulo :: setNumPro(int iNumPro) {
    iNumProveedor = iNumPro;
}

void Articulo :: setDesc(string sDesc) {
    sDescripcion = sDesc;
}

void Articulo :: setPrec(double dPrec) {
    dPrecio = dPrec;
}

int Articulo :: getClave() {
    return iClave;
}

int Articulo :: getNumPro() {
    return iNumProveedor;
}

string Articulo :: getDesc() {
    return sDescripcion;
}

double Articulo :: getPrec() {
    return dPrecio;
}
#endif /* Articulo_h */
