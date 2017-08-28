//
//  Esfera.h
//  Tarea3
//
//  Created by Enrique Villa on 1/30/17.
//  Copyright © 2017 Enrique Villa. All rights reserved.
//

#ifndef Esfera_h
#define Esfera_h

class Esfera {
public:
    Esfera();
    Esfera(double dRad);
    void setRadio(double dRad);
    double getRadio();
    double calcArea(Esfera obj);
    double calcVol(Esfera obj);
    Esfera menor(Esfera obj2);
    
private:
    double dRadio;
    const double pi = 3.1415;
};

Esfera :: Esfera() {
    dRadio = 1.0;
}

Esfera :: Esfera(double dRad) {
    dRadio = dRad;
}

void Esfera :: setRadio(double dRad) {
    dRadio = dRad;
}

double Esfera :: getRadio() {
    return dRadio;
}

double Esfera :: calcArea(Esfera obj) {
    return 4 * pi * (obj.dRadio * obj.dRadio);
}

double Esfera :: calcVol(Esfera obj) {
    return 4 * pi * (obj.dRadio * obj.dRadio * obj.dRadio) / 3;
}

Esfera Esfera :: menor(Esfera obj2) {
    Esfera esfMenor;
    if (dRadio < obj2.dRadio) {
        esfMenor.dRadio = dRadio;
        return esfMenor;
    } else {
        esfMenor.dRadio = obj2.dRadio;
        return esfMenor;
    }
}

#endif /* Esfera_h */
