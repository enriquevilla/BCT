//
//  Chequera.h
//  28.03.17
//
//  Created by Enrique Villa on 3/30/17.
//  Copyright © 2017 Enrique Villa. All rights reserved.
//

#ifndef Chequera_h
#define Chequera_h

class CtaBanc
{
public:
    CtaBanc();
    CtaBanc(int n, double s);
    int getNumCuenta() {return numCuenta;};
    void setNumCuenta(int n) {numCuenta = n;};
    void setSaldo(double s) { saldo = s; };
    double getSaldo(){return saldo;};
    void deposita(double cant);
    virtual bool retira(double cant);  // se debe redefinir en la clase Cheques
    virtual void mostrar();		   // se debe redefinir en la clase Cheques
protected:
    int numCuenta;
    double saldo;
};

CtaBanc::CtaBanc()
{	numCuenta = 0;
    saldo = 0;
}

CtaBanc::CtaBanc(int n, double s)
{	numCuenta = n;
    saldo = s;
}

void CtaBanc::deposita(double cant)
{	saldo += cant;
}

// si hay suficiente saldo resta cant del saldo de la cuenta y manda true, si no hay suficiente saldo, solo manda false
bool CtaBanc::retira(double cant)
{	if (saldo >= cant)
{	saldo -= cant;
    return true;
}
else
    return false;
}

void CtaBanc::mostrar()
{	cout<<endl;
    cout<<"Cuenta: "<<numCuenta<< " saldo: "<<saldo<<endl;
}


// Agrega aquí la clase Chequera

class Chequera: public CtaBanc {
public:
    Chequera();
    Chequera(int, double, double);
    void setComision(double);
    int getComision();
    void mostrar();
    bool retira(double);
private:
    double comision;
};

Chequera :: Chequera() : CtaBanc() {
    comision = 0;
}

Chequera :: Chequera(int n, double s, double c) : CtaBanc(n, s) {
    comision = c;
}

void Chequera :: setComision(double com) {
    comision = com;
}

int Chequera :: getComision() {
    return comision;
}

void Chequera :: mostrar() {
    cout << endl;
    CtaBanc :: mostrar();
    cout << comision << endl;
}

bool Chequera :: retira(double cant) {
    if (saldo > cant) {
        saldo -= (comision + cant);
        return true;
    } else return false;
}
// Esto va dentro del método mostrar de la clase Chequera ... o sea llama al método mostrar de la clase padre y agrega un renglón
//	cout<<endl;
//  CtaBanc:: mostrar();
//  cout << comision << endl;

#endif /* Chequera_h */
