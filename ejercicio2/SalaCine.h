//
//  SalaCine.h
//  Tarea3
//
//  Created by Enrique Villa on 2/1/17.
//  Copyright © 2017 Enrique Villa. All rights reserved.
//

#ifndef SalaCine_h
#define SalaCine_h

class SalaCine {
public:
    SalaCine();
    SalaCine(int iLug, string sPel);
    void setLugares(int iLug);
    void setPelicula(string sPel);
    int getLugares();
    string getPelicula();
    void compraBoletos(int iBol);
private:
    int iLugares;
    string sPelicula;
};

SalaCine :: SalaCine() {
    iLugares = 0;
    sPelicula = "";
}

SalaCine :: SalaCine(int iLug, string sPel) {
    iLugares = iLug;
    sPelicula = sPel;
}

void SalaCine :: setLugares(int iLug) {
    iLugares = iLug;
}

void SalaCine :: setPelicula(string sPel) {
    sPelicula = sPel;
}

int SalaCine :: getLugares() {
    return iLugares;
}

string SalaCine :: getPelicula() {
    return sPelicula;
}

void SalaCine :: compraBoletos(int iBol) {
    iLugares -= iBol;
}

#endif /* SalaCine_h */
