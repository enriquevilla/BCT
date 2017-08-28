//
//  Tiempo.h
//  Tarea 6
//
//  Created by Enrique Villa on 3/12/17.
//  Copyright © 2017 Enrique Villa. All rights reserved.
//

#ifndef Tiempo_h
#define Tiempo_h

class Tiempo {
    
public:
    Tiempo();
    Tiempo(int h, int m);
    void setHora(int h);
    void setMinu(int m);
    int getHora();
    int getMinu();
    void muestra();
    
    // Miembro de la clase. operador ++ incrementa el Tiempo en 1 minuto y regresa el tiempo
    Tiempo operator++();
    //Friend. operador -- decrementa el Tiempo en 1 minuto y regresa el tiempo
    // si la hora es 0:0 y se pide decrementar, regresa 0:0
    friend Tiempo operator--(Tiempo&);
    // Miembro de la clase. operador > Compara si el primer Tiempo es mayor que el segundo
    bool operator>(Tiempo);
    // Miembro de la clase. operador + Para sumar tiempo + minutos, regresa un tiempo como resultado
    Tiempo operator+(int);
    // Friend. operador + Para sumar minutos + tiempo, regresa un tiempo como resultado
    friend Tiempo operator+(int, Tiempo);
    // Miembro de la clase. operador + Suma t1 con t2 y regresa un tiempo con el resultado
    Tiempo operator+(Tiempo);
    // Friend. operador += Suma t1 con t2 y deja el resultado en t1, no regresa nada
    friend void operator+=(Tiempo&, Tiempo);
private:
    int hora;
    int minu;
};

Tiempo::Tiempo() {
    hora = 0;
    minu = 0;
}

Tiempo::Tiempo(int h, int m) {
    hora = h;
    minu = m;
}

void Tiempo::setHora(int h) {
    hora = h;
}

void Tiempo::setMinu(int m) {
    minu = m;
}

int Tiempo::getHora() {
    return hora;
}

int Tiempo::getMinu() {
    return minu;
}

void Tiempo::muestra() {
    cout <<hora<<":";
    if (minu<10)
        cout << "0" <<minu;
    else
        cout << minu;
}

Tiempo Tiempo :: operator++() {
    this->minu = this->getMinu() + 1;
    if (this->minu > 59) {
        this->hora = this->hora + 1;
        this->minu = 0;
    }
    return *this;
}

Tiempo operator--(Tiempo &t1) {
    if (t1.hora != 0 && t1.minu != 0) {
        t1.minu = t1.minu - 1;
    }
    if (t1.minu < 0) {
        t1.hora = t1.hora - 1;
        t1.minu = 59;
    }
    return t1;
}

bool Tiempo :: operator>(Tiempo t2) {
    return (this->getHora() * 60 + this->getMinu() > t2.getHora() * 60 + t2.getMinu());
}

Tiempo Tiempo :: operator+(int i2) {
    Tiempo res;
    res.hora = this->hora;
    res.minu = this->minu + i2;
    if (res.minu > 60) {
        res.hora = res.hora + res.minu / 60;
        res.minu = res.minu % 60;
    }
    return res;
}

Tiempo operator+(int i1, Tiempo t2) {
    Tiempo res;
    res.hora = t2.hora;
    res.minu = t2.minu + i1;
    if (res.minu > 60) {
        res.hora = res.hora + res.minu / 60;
        res.minu = res.minu % 60;
    }
    return res;
}

Tiempo Tiempo :: operator+(Tiempo t2) {
    Tiempo res;
    res.hora = this->hora + t2.hora;
    res.minu = this->minu + t2.minu;
    if (res.minu > 60) {
        res.hora = res.hora + res.minu / 60;
        res.minu = res.minu % 60;
    }
    return res;
}

void operator+=(Tiempo &t1, Tiempo t2) {
    t1 = t1 + t2;
    if (t1.minu > 60) {
        t1.hora = t1.hora + t1.minu / 60;
        t1.minu = t1.minu % 60;
    }
}
#endif /* Tiempo_h */
