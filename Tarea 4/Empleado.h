//
//  Empleado.h
//  Tarea 4
//
//  Created by Enrique Villa on 2/19/17.
//  Copyright © 2017 Enrique Villa. All rights reserved.
//

#ifndef Empleado_h
#define Empleado_h

class Empleado {
public:
    Empleado();
    void setID(int ID);
    void setHoras(int horas);
    void setSueldo(double sueldo);
    void setSpH(double SpH);
    int getID();
    int getHoras();
    double getSueldo();
    double getSpH();
    void registrarHoras(int horas);
    double calcularPago();
private:
    int iID, iHoras;
    double dSueldo, dSpH;
};

Empleado :: Empleado() {
    iID = 0;
    iHoras = 0;
    dSueldo = 0.0;
    dSpH = 0.0;
}

void Empleado :: setID(int ID) {
    iID = ID;
}

void Empleado :: setHoras(int horas) {
    iHoras = horas;
}

void Empleado :: setSueldo(double sueldo) {
    dSueldo = sueldo;
}

void Empleado :: setSpH(double SpH) {
    dSpH = SpH;
}

int Empleado :: getID() {
    return iID;
}

int Empleado :: getHoras() {
    return iHoras;
}

double Empleado :: getSueldo() {
    return dSueldo;
}

double Empleado :: getSpH() {
    return dSpH;
}

void Empleado :: registrarHoras(int horas) {
    iHoras = iHoras + horas;
}

double Empleado :: calcularPago() {
    return dSueldo + iHoras * dSpH;
}
#endif /* Empleado_h */
