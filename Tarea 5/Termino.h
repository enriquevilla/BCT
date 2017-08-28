//
//  Termino.h
//  Tarea 5
//
//  Created by Enrique Villa on 3/1/17.
//  Copyright © 2017 Enrique Villa. All rights reserved.
//

#ifndef Termino_h
#define Termino_h

#include "Fraccion.h"

class Termino {
public:
    Termino();
    Termino(Fraccion coef, char var, int expo);
    void setFraccion(int num, int den);
    void setVariable(char var);
    void setExponente(int expo);
    Fraccion getFraccion();
    char getVariable();
    int getExponente();
    void muestra();
private:
    Fraccion coeficiente;
    char variable;
    int exponente;
};

Termino :: Termino() {
    coeficiente.setNumerador(1);
    coeficiente.setDenominador(1);
    variable = 'x';
    exponente = 1;
}

Termino :: Termino(Fraccion coef, char var, int expo) {
    coeficiente = coef;
    variable = var;
    exponente = expo;
}

void Termino :: setFraccion(int num, int den) {
    coeficiente.setNumerador(num);
    coeficiente.setDenominador(den);
}

void Termino :: setVariable(char var) {
    variable = var;
}

void Termino :: setExponente(int expo) {
    exponente = expo;
    if (expo < 1) {
        exponente = 1;
    }
}

Fraccion Termino :: getFraccion() {
    return coeficiente;
}

char Termino :: getVariable() {
    return variable;
}

int Termino :: getExponente() {
    return exponente;
}

void Termino :: muestra() {
    cout << coeficiente.getNumerador();
    if (coeficiente.getDenominador() != 1) {
        cout << "/" << coeficiente.getDenominador();
    }
    cout << variable;
    if (exponente != 1) {
        cout << "^" << exponente;
    }
}

#endif /* Termino_h */
