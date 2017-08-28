//
//  CtaBanc.h
//  27.01.17
//
//  Created by Enrique Villa on 1/27/17.
//  Copyright © 2017 Enrique Villa. All rights reserved.
//

#ifndef CtaBanc_h
#define CtaBanc_h

class CtaBanc {
    public:
        CtaBanc();
        CtaBanc(double dSal, string sNom);
        void setSaldo(double dSal);
        void setNombre(string sNom);
        double getSaldo();
        string getNombre();
        bool retiraSaldo(double dRet);
        void depositaSaldo(double dDep);
    private:
        double dSaldo;
        string sNombre;
};

CtaBanc :: CtaBanc() {
    dSaldo = 0.0;
    sNombre = "";
}

CtaBanc :: CtaBanc(double dSal, string sNom) {
    dSaldo = dSal;
    sNombre = sNom;
}

double CtaBanc :: getSaldo() {
    return dSaldo;
}

string CtaBanc :: getNombre() {
    return sNombre;
}
void CtaBanc :: setSaldo(double dSal) {
    dSaldo = dSal;
}

void CtaBanc :: setNombre(string sNom) {
    sNombre = sNom;
}

bool CtaBanc :: retiraSaldo(double dRet) {
    if (dSaldo < dRet) {
        return false;
    } else {
        dSaldo -= dRet;
        return true;
    }
}

void CtaBanc :: depositaSaldo(double dDep) {
    dSaldo += dDep;
}

#endif /* CtaBanc_h */
