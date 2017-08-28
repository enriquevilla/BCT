//
//  Reloj.h
//  7.2.17
//
//  Created by Enrique Villa on 2/7/17.
//  Copyright © 2017 Enrique Villa. All rights reserved.
//
#include <iomanip>

#ifndef Reloj_h
#define Reloj_h

class Reloj {
public:
    Reloj();
    Reloj(int iHor, int iMinutos);
    void setHora(int iHor);
    void setMinu(int iMinu);
    int getHora();
    int getMinu();
    void muestra();
private:
    int iHora, iMinutos;
};

Reloj :: Reloj() {
    iHora = 0;
    iMinutos = 0;
}

Reloj :: Reloj(int iHor, int iMinu) {
    iHora = iHor;
    iMinutos = iMinu;
}

void Reloj :: setHora(int iHor) {
    iHora = iHor;
}

void Reloj :: setMinu(int iMinu) {
    iMinutos = iMinu;
}

int Reloj :: getHora() {
    return iHora;
}

int Reloj :: getMinu() {
    return iMinutos;
}

void Reloj :: muestra() {
    cout << setw(2) << setfill('0') << iHora << ":" << setw(2) << setfill('0') << iMinutos << endl;
}
#endif /* Reloj_h */
