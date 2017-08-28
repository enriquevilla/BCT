//
//  Taxi.h
//  28.02.17
//
//  Created by Enrique Villa on 2/28/17.
//  Copyright © 2017 Enrique Villa. All rights reserved.
//

#ifndef Taxi_h
#define Taxi_h

#include "Persona.h"

class Taxi {
public:
    Taxi();
    Taxi(Persona resp, int ide);
    void setResponsable(Persona resp);
    void setIdent(int ide);
    Persona getResponsable();
    int getIdent();
private:
    Persona responsable;
    int ident;
};

Taxi :: Taxi () {
    responsable.setNombre("-");
    responsable.setNumCel("-");
    ident = 0;
}

Taxi :: Taxi (Persona resp, int ide) {
    responsable = resp;
    ident = ide;
}

void Taxi :: setResponsable (Persona resp) {
    responsable = resp;
}

void Taxi :: setIdent (int ide) {
    ident = ide;
}

Persona Taxi :: getResponsable () {
    return responsable;
}

int Taxi :: getIdent () {
    return ident; 
}

#endif /* Taxi_h */
