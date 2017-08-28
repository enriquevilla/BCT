//
//  Funcion.h
//  ProyectoP2
//
//  Created by Enrique Villa on 3/6/17.
//  Copyright © 2017 Enrique Villa. All rights reserved.
//

#ifndef Funcion_h
#define Funcion_h

#include "Hora.h"

class Funcion {
public:
    Funcion();
    Funcion(string clave, int sla, int num, Hora hr);
    void setClave(string clave);
    void setSala(int sla);
    void setNumPel(int num);
    void setHr(Hora hr);
    string getClave();
    int getSala();
    int getNumPel();
    Hora getHora();
    void muestra();
private:
    string cveFuncion;
    int sala, numPel;
    Hora hora;
};

Funcion :: Funcion() {
    cveFuncion = "";
    sala = 0;
    numPel = 0;
    hora.setMin(0);
    hora.setHora(0);
}

Funcion :: Funcion(string clave, int sla, int num, Hora hr) {
    cveFuncion = clave;
    sala = sla;
    numPel = num;
    hora = hr;
}

void Funcion :: setClave(string clave) {
    cveFuncion = clave;
}

void Funcion :: setSala(int sla) {
    sala = sla;
}

void Funcion :: setNumPel(int num) {
    numPel = num;
}

void Funcion :: setHr(Hora hr) {
    hora = hr;
}

string Funcion :: getClave() {
    return cveFuncion;
}

int Funcion :: getSala() {
    return sala;
}

int Funcion :: getNumPel() {
    return numPel;
}

Hora Funcion :: getHora() {
    return hora;
}

void Funcion :: muestra() {
    cout << cveFuncion << " " << sala << " " << numPel << " " << hora.getHora() << " " << hora.getMin() << endl;
}

#endif /* Funcion_h */
