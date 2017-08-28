//
//  Material.h
//  ProyectoP3
//
//  Created by Enrique Villa on 4/7/17.
//  Copyright © 2017 Enrique Villa. All rights reserved.
//

#ifndef Material_h
#define Material_h

#include "Reserva.h"

class Material {
public:
    Material();
    Material(int, string);
    void setIDMat(int);
    void setTitulo(string);
    int getIDMat();
    string getTitulo();
    virtual void muestraDatos() = 0;
    virtual int cantidadDeDiasDePrestamo() = 0;
protected:
    int IDMat;
    string sTitulo;
};

Material :: Material() {
    IDMat = 0;
    sTitulo = "";
}

Material :: Material(int i1, string s1) {
    IDMat = i1;
    sTitulo = s1;
}

void Material :: setIDMat(int i1) {
    IDMat = i1;
}

void Material :: setTitulo(string s1) {
    sTitulo = s1;
}

int Material :: getIDMat() {
    return IDMat;
}

string Material :: getTitulo() {
    return sTitulo;
}

class Libro : public Material {
public:
    Libro();
    Libro(int, string, int, string);
    void setNumPag(int);
    void setAutor(string);
    int getNumPag();
    string getAutor();
    void muestraDatos();
    int cantidadDeDiasDePrestamo();
private:
    int numPag;
    string Autor;
};

Libro :: Libro() : Material() {
    numPag = 0;
    Autor = "";
}

Libro :: Libro(int i1, string s1, int i2, string s2) : Material(i1, s1) {
    numPag = i2;
    Autor = s2;
}

void Libro :: setNumPag(int i1) {
    numPag = i1;
}

void Libro :: setAutor(string s1) {
    Autor = s1;
}

int Libro :: getNumPag() {
    return numPag;
}

string Libro :: getAutor() {
    return Autor;
}

void Libro :: muestraDatos() {
    cout << "ID Material: " << IDMat << endl << "Título: " << sTitulo << endl << "Número de páginas: " << numPag << endl << "Autor: " << Autor << endl << endl;
}

int Libro :: cantidadDeDiasDePrestamo() {
    return 10;
}

class Disco : public Material {
public:
    Disco();
    Disco(int, string, int);
    void setDuracion(int);
    int getDuracion();
    void muestraDatos();
    int cantidadDeDiasDePrestamo();
private:
    int duracion;
};

Disco :: Disco() : Material() {
    duracion = 0;
}

Disco :: Disco(int i1, string s1, int i2) : Material(i1, s1) {
    duracion = i2;
}

void Disco :: setDuracion(int i1) {
    duracion = i1;
}

int Disco :: getDuracion() {
    return duracion;
}

void Disco :: muestraDatos() {
    cout << "ID Material: " << IDMat << endl << "Título: " << sTitulo << endl << "Duración: " << duracion << endl << endl;
}

int Disco :: cantidadDeDiasDePrestamo() {
    return 3;
}

class Software : public Material {
public:
    Software();
    Software(int, string, string);
    void setSistemaOper(string);
    string getSistemaOper();
    void muestraDatos();
    int cantidadDeDiasDePrestamo();
private:
    string sistemaOper;
};

Software :: Software() : Material() {
    sistemaOper = "";
}

Software :: Software(int i1, string s1, string s2) : Material(i1, s1) {
    sistemaOper = s2;
}

void Software :: setSistemaOper(string s1) {
    sistemaOper = s1;
}

string Software :: getSistemaOper() {
    return sistemaOper;
}

void Software :: muestraDatos() {
    cout << "ID Material: " << IDMat << endl << "Título: " << sTitulo << endl << "Sistema Operativo: " << sistemaOper << endl << endl;
}

int Software :: cantidadDeDiasDePrestamo() {
    return 1;
}

#endif /* Material_h */
