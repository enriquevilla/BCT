//
//  Fraccion.h
//  Tarea 5
//
//  Created by Enrique Villa on 3/1/17.
//  Copyright © 2017 Enrique Villa. All rights reserved.
//

#ifndef Fraccion_h
#define Fraccion_h

class Fraccion {
public:
    Fraccion();
    Fraccion(int num, int den);
    void setNumerador(int num);
    void setDenominador(int den);
    int getNumerador();
    int getDenominador();
    double calcValorReal();
private:
    int numerador, denominador;
};

Fraccion :: Fraccion() {
    numerador = 1;
    denominador = 1;
}

Fraccion :: Fraccion(int num, int den) {
    numerador = num;
    denominador = den;
}

void Fraccion :: setNumerador(int num) {
    numerador = num;
}

void Fraccion :: setDenominador(int den) {
    denominador = den;
}

int Fraccion :: getNumerador() {
    return numerador;
}

int Fraccion :: getDenominador() {
    return denominador;
}

double Fraccion :: calcValorReal() {
    double num, den;
    num = numerador;
    den = denominador;
    return num / den;
}
#endif /* Fraccion_h */
