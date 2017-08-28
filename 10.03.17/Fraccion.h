//
//  Fraccion.h
//  10.03.17
//
//  Created by Enrique Villa on 3/10/17.
//  Copyright © 2017 Enrique Villa. All rights reserved.
//

#ifndef Fraccion_h
#define Fraccion_h

#include <iostream>
using namespace std;

class Fraccion
{
    // funciones friend
    friend bool operator==(Fraccion f1, Fraccion f2); // c) == igual
    friend Fraccion operator+(int, Fraccion); // d) + suma entero + fraccion. Ejemplo f3 = 5 + f1;
    friend Fraccion operator++(Fraccion&); // e) ++ incrmenta 1 entero. Ejemplo f3 = ++f1;
    friend void operator+=(Fraccion&, Fraccion); // f) += suma. Ejemplo:   f1 += f2;
    
public:
    //Constructores
    Fraccion();
    Fraccion(int, int); // primero el numerador y luego el denominador
    //Metodos de acceso
    int getNum();
    int getDen();
    //Metodos de modificacion
    void setNum(int);
    void setDen(int);
    // sobrecargas
    Fraccion operator+(Fraccion);   // a) suma 2 fracciones
    Fraccion operator-();   // b) regresa la fracción con num negativo
    Fraccion operator+(int); // g) + suma fraccion + entero. Ejemplo f3 = f1 + 5
    Fraccion operator--(); // h) -- decrementa 1 entero. Ejemplo f3 = --f2;
    Fraccion operator-(Fraccion); // i) - resta. Ejemplo f3 = f1 - f2
    
private:
    // atributos
    int num;
    int den;
};

//Constructores
Fraccion::Fraccion()
{
    num = 1;
    den = 1;
}

Fraccion::Fraccion(int n, int d) // primero el numerador y luego el denominador
{
    num = n;
    den = d;
}

//Metodos de acceso
int Fraccion::getNum()
{
    return num;
}

int Fraccion::getDen()
{
    return den;
}


//Metodos de modificacion
void Fraccion::setNum(int valor)
{
    num = valor;
}

void Fraccion::setDen(int valor)
{
    den = valor;
}

Fraccion Fraccion::operator+(Fraccion f2) {
    Fraccion res;
    res.num = num * f2.den + f2.num * den;
    res.den = den * f2.den;
    return res;
}

Fraccion Fraccion::operator-() {
    Fraccion nuevo(-num, den);
    return nuevo;
}

Fraccion Fraccion :: operator+(int i1) {
    return *this + i1;
}

Fraccion Fraccion :: operator--() {
    *this = *this + -1;
    return *this;
}

Fraccion Fraccion :: operator-(Fraccion f2){
    return *this + -f2;
}

bool operator==(Fraccion f1, Fraccion f2) {
    if (f1.num == f2.num && f1.den == f2.den)
        return true;
    else
        return false;
}

Fraccion operator+(int i1, Fraccion f1) {
    Fraccion f2(i1, 1);
    return f2 + f1;
}

Fraccion operator++(Fraccion &f1) {
    f1 = f1 + 1;
    return f1;
}

void operator+=(Fraccion &f1, Fraccion f2) {
    f1 = f1 + f2;
}

#endif /* Fraccion_h */
