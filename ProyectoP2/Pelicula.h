//
//  Pelicula.h
//  ProyectoP2
//
//  Created by Enrique Villa on 3/6/17.
//  Copyright © 2017 Enrique Villa. All rights reserved.
//

#ifndef Pelicula_h
#define Pelicula_h

#include "Actor.h"
#include "Funcion.h"

class Pelicula {
public:
    Pelicula();
    void setNumPel(int num);
    void setYear(int yr);
    void setDuracion(int dur);
    void setTitulo(string titu);
    void setGenero(string gen);
    int getNumPel();
    int getYear();
    int getDuracion();
    int getActor(int num);
    int getCantAct();
    string getTitulo();
    string getGenero();
    bool agregaActor(int num);
private:
    int numPel, year, duracion, cantAct, listaAct[20];
    string titulo, genero;
};

Pelicula :: Pelicula() {
    numPel = 0;
    year = 0;
    duracion = 0;
    cantAct = 0;
    titulo = "";
    genero = "";
}

void Pelicula :: setNumPel(int num) {
    numPel = num;
}

void Pelicula :: setYear(int yr) {
    year = yr;
}

void Pelicula :: setDuracion(int dur) {
    duracion = dur;
}

void Pelicula :: setTitulo(string titu) {
    titulo = titu;
}

void Pelicula :: setGenero(string gen) {
    genero = gen;
}

int Pelicula :: getNumPel() {
    return numPel;
}

int Pelicula :: getYear() {
    return year;
}

int Pelicula :: getDuracion() {
    return duracion;
}

int Pelicula :: getActor(int num) {
    return listaAct[num];
}

int Pelicula :: getCantAct() {
    return cantAct;
}

string Pelicula :: getTitulo() {
    return titulo;
}

string Pelicula :: getGenero() {
    return genero;
}

bool Pelicula :: agregaActor(int num) {
    bool ex = false;
    for (int iCont = 0; iCont < 20; iCont++) {
        if (ex == false) {
            if (listaAct[iCont] == num) {
                ex = true;
            }
        }
    }
    if (ex == false) {
        listaAct[cantAct] = num;
        cantAct++;
    }
    return !ex;
}
#endif /* Pelicula_h */
