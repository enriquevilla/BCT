//
//  Hora.h
//  ProyectoP2
//
//  Created by Enrique Villa on 3/6/17.
//  Copyright © 2017 Enrique Villa. All rights reserved.
//

#ifndef Hora_h
#define Hora_h

class Hora {
public:
    Hora();
    Hora(int hr, int mim);
    void setMin(int min);
    void setHora(int hr);
    int getMin();
    int getHora();
    void muestra();
    friend bool operator==(Hora, Hora);
private:
    int mm, hh;
};

Hora :: Hora() {
    mm = 0;
    hh = 0;
}

Hora :: Hora(int hr, int min) {
    mm = min;
    hh = hr;
}

void Hora :: setMin(int min) {
    mm = min;
}

void Hora :: setHora(int hr) {
    hh = hr;
}

int Hora :: getMin() {
    return mm;
}

int Hora :: getHora() {
    return hh;
}

void Hora :: muestra() {
    cout << hh << ":" << mm << endl;
}

bool operator==(Hora hr1, Hora hr2) {
    return (hr1.hh * 60 + hr1.mm == hr2.hh * 60 + hr2.mm);
}
#endif /* Hora_h */
