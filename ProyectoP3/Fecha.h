//
//  Fecha.h
//  ProyectoP3
//
//  Created by Enrique Villa on 4/6/17.
//  Copyright © 2017 Enrique Villa. All rights reserved.
//

#ifndef Fecha_h
#define Fecha_h

class Fecha {
public:
    Fecha();
    Fecha(int, int, int);
    void setDia(int);
    void setMes(int);
    void setYear(int);
    int getDia();
    int getMes();
    int getYear();
    void setFecha(int, int, int);
    friend Fecha operator+(Fecha, int);
    friend bool operator>=(Fecha, Fecha);
    friend bool operator<=(Fecha, Fecha);
    friend bool operator>(Fecha, Fecha);
    friend bool operator<(Fecha, Fecha);
    friend bool operator==(Fecha, Fecha);
    friend istream& operator>>(istream &is, Fecha &f1);
    friend ostream& operator<<(ostream &os, Fecha f1);
private:
    int dd, mm, aa;
    string nombreMes();
    bool esBisiesto();
    int diasMes();
};

Fecha :: Fecha() {
    dd = 1;
    mm = 1;
    aa = 1;
}

Fecha :: Fecha(int d, int m, int a) {
    dd = d;
    mm = m;
    aa = a;
}

void Fecha :: setDia(int d) {
    dd = d;
}

void Fecha :: setMes(int m) {
    mm = m;
}

void Fecha :: setYear(int a) {
    aa = a;
}

int Fecha :: getDia() {
    return dd;
}

int Fecha :: getMes() {
    return mm;
}

int Fecha :: getYear() {
    return aa;
}

void Fecha :: setFecha(int d, int m, int a) {
    dd = d;
    mm = m;
    aa = a;
}

Fecha operator+(Fecha f1, int i1) {
    while (i1 > 0) {
        if (i1 - (f1.diasMes() - f1.dd) > 0) {
            i1 = i1 - (f1.diasMes() - f1.dd);
            f1.dd = 0;
            f1.mm++;
            if (f1.mm > 12) {
                f1.aa++;
                f1.mm = 1;
            }
        } else {
            f1.dd = f1.dd + i1;
            i1 = 0;
        }
    }
    return f1;
}

bool operator>=(Fecha f1, Fecha f2) {
    return ((f1.aa == f2.aa && f1.mm == f2.mm && f1.dd == f2.dd) || ((f1.aa >= f2.aa && f1.mm > f2.mm) || (f1.aa >= f2.aa && f1.mm == f2.mm && f1.dd > f2.dd)));
}

bool operator<=(Fecha f1, Fecha f2) {
    return ((f1.aa == f2.aa && f1.mm == f2.mm && f1.dd == f2.dd) || ((f1.aa <= f2.aa && f1.mm < f2.mm) || (f1.aa <= f2.aa && f1.mm == f2.mm && f1.dd < f2.dd)));
}

bool operator>(Fecha f1, Fecha f2) {
    return ((f1.aa > f2.aa) || (f1.aa == f2.aa && f1.mm > f2.mm) || (f1.aa == f2.aa && f1.mm == f2.mm && f1.dd > f2.dd));
}

bool operator<(Fecha f1, Fecha f2) {
    return ((f1.aa < f2.aa) || (f1.aa == f2.aa && f1.mm < f2.mm) || (f1.aa == f2.aa && f1.mm == f2.mm && f1.dd < f2.dd));
}

bool operator==(Fecha f1, Fecha f2) {
    return (f1.dd == f2.dd && f1.mm == f2.mm && f1.aa == f2.aa);
}

istream& operator>>(istream &is, Fecha &f1) {
    is >> f1.dd;
    is >> f1.mm;
    is >> f1.aa;
    return is;
}

ostream& operator<<(ostream &os, Fecha f1) {
    os << f1.dd << " de " << f1.nombreMes() << " de " << f1.aa << endl;
    return os;
}

string Fecha :: nombreMes() {
    string mes;
    if (mm == 1) {
        mes = "Ene";
    }
    if (mm == 2) {
        mes = "Feb";
    }
    if (mm == 3) {
        mes = "Mar";
    }
    if (mm == 4) {
        mes = "Abr";
    }
    if (mm == 5) {
        mes = "May";
    }
    if (mm == 6) {
        mes = "Jun";
    }
    if (mm == 7) {
        mes = "Jul";
    }
    if (mm == 8) {
        mes = "Ago";
    }
    if (mm == 9) {
        mes = "Sep";
    }
    if (mm == 10) {
        mes = "Oct";
    }
    if (mm == 11) {
        mes = "Nov";
    }
    if (mm == 12) {
        mes = "Dic";
    }
    return mes;
}

bool Fecha :: esBisiesto() {
    return aa % 4 == 0;
}

int Fecha :: diasMes() {
    if (mm == 1 | mm == 3 | mm == 5 | mm == 7 | mm == 8 | mm == 10 | mm == 12) {
        return 31;
    }
    if (mm == 2) {
        if (esBisiesto()) {
            return 29;
        } else return 28;
    }
    if (mm == 4 | mm == 6 | mm == 9 | mm == 11) {
        return 30;
    }
    return 0;
}

#endif /* Fecha_h */
