//
//  Reloj.h
//  24.02.17
//
//  Created by Enrique Villa on 2/24/17.
//  Copyright © 2017 Enrique Villa. All rights reserved.
//

#ifndef Reloj_h
#define Reloj_h

class Reloj{
public:
    Reloj();
    Reloj(int hr, int min);
    void setHora(int hr);
    void setMinu(int min);
    int getHora();
    int getMinu();
private:
    int hora, minu;
};

Reloj :: Reloj() {
    hora = 12;
    minu = 0;
}

Reloj :: Reloj(int hr, int min) {
    hora = hr;
    minu = min;
}

void Reloj :: setHora(int hr) {
    hora = hr;
}

void Reloj :: setMinu(int min) {
    minu = min;
}

int Reloj :: getHora() {
    return hora;
}

int Reloj :: getMinu() {
    return minu; 
}

#endif /* Reloj_h */
