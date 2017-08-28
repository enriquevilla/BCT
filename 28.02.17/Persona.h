//
//  Persona.h
//  28.02.17
//
//  Created by Enrique Villa on 2/28/17.
//  Copyright © 2017 Enrique Villa. All rights reserved.
//

#ifndef Persona_h
#define Persona_h

class Persona {
public:
    Persona();
    Persona(string nom, string numC);
    void setNombre(string nombre);
    void setNumCel(string numC);
    string getNombre();
    string getNumCel();
private:
    string nombre, numCel;
};

Persona :: Persona() {
    nombre = "-";
    numCel = "0";
}

Persona :: Persona(string nom, string numC) {
    nombre = nom;
    numCel = numC;
}

void Persona :: setNombre (string nom) {
    nombre = nom;
}

void Persona :: setNumCel (string numC) {
    numCel = numC;
}

string Persona :: getNombre () {
    return nombre;
}

string Persona :: getNumCel () {
    return numCel; 
}

#endif /* Persona_h */
