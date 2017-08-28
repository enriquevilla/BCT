//
//  Evento.h
//  24.02.17
//
//  Created by Enrique Villa on 2/24/17.
//  Copyright © 2017 Enrique Villa. All rights reserved.
//

#ifndef Evento_h
#define Evento_h
#include "Reloj.h"

class Evento {
public:
    Evento();
    Evento(Reloj ini, int dur, string asun);
    void setInicio(Reloj ini);
    void setDuracion(int dur);
    void setAsunto(string asun);
    Reloj getInicio();
    int getDuracion();
    string getAsunto();
private:
    Reloj inicio;
    int duracion;
    string asunto;
};

Evento :: Evento() {
    inicio.setHora(8);
    inicio.setMinu(0);
    duracion = 30;
    asunto = "Evento";
}

Evento :: Evento(Reloj ini, int dur, string asun) {
    inicio = ini;
    duracion = dur;
    asunto = asun;
}

void Evento :: setInicio(Reloj ini) {
    inicio = ini;
}

void Evento :: setDuracion(int dur) {
    duracion = dur;
}

void Evento :: setAsunto(string asun) {
    asunto = asun;
}

Reloj Evento :: getInicio() {
    return inicio;
}

int Evento :: getDuracion() {
    return duracion;
}

string Evento :: getAsunto() {
    return asunto; 
}

#endif /* Evento_h */
