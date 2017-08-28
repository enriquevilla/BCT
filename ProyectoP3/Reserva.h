//
//  Reserva.h
//  ProyectoP3
//
//  Created by Enrique Villa on 4/7/17.
//  Copyright © 2017 Enrique Villa. All rights reserved.
//

#ifndef Reserva_h
#define Reserva_h

#include "Fecha.h"
#include "Material.h"

class Reserva {
public:
    Reserva();
    Reserva(int, int, Fecha);
    void setIDMat(int);
    void setIDCli(int);
    void setFechaRes(Fecha);
    int getIDMat();
    int getIDCli();
    Fecha getFechaRes();
    Fecha calculaFechaFinReserva(int);
    void muestra(int iDias);
private:
    int IDMat, IDCli;
    Fecha fechaRes;
};

Reserva :: Reserva() {
    IDMat = 0;
    IDCli = 0;
    fechaRes.setDia(1);
    fechaRes.setMes(1);
    fechaRes.setYear(2000);
}

Reserva :: Reserva(int i1, int i2, Fecha f1) {
    IDMat = i1;
    IDCli = i2;
    fechaRes = f1;
}

void Reserva :: setIDMat(int i1) {
    IDMat = i1;
}

void Reserva :: setIDCli(int i1) {
    IDCli = i1;
}

void Reserva :: setFechaRes(Fecha f1) {
    fechaRes = f1;
}

int Reserva :: getIDMat() {
    return IDMat;
}

int Reserva :: getIDCli() {
    return IDCli;
}

Fecha Reserva :: getFechaRes() {
    return fechaRes;
}

Fecha Reserva :: calculaFechaFinReserva(int iDias) {
    return fechaRes + iDias;
}

#endif /* Reserva_h */
