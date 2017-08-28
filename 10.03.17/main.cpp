//
//  main.cpp
//  10.03.17
//
//  Created by Enrique Villa on 3/10/17.
//  Copyright © 2017 Enrique Villa. All rights reserved.
//

#include <iostream>
using namespace std;

#include "Fraccion.h"

int main() {
    
    char opcion;
    Fraccion f1(1,2), f2(3,4), f3;
    
    cin >> opcion;
    
    switch (opcion) {
        case 'a':
            // suma
            cout << "suma de f2 + f2 " << endl;
            f3 = f1 + f2;
            cout << f3.getNum() << "/" << f3.getDen() << endl;
            break;
        case 'b':
            // negativo
            cout << "el negativo de f2 " << endl;
            f3 = -f2;
            cout << f3.getNum() << "/" << f3.getDen() << endl;
            break;
        case 'c':
            // igual
            if (f2 == f3)
                cout << "f2 y f3 son iguales " << endl;
            else
                cout << "f2 y  f3 son diferentes" << endl;
            break;
        case 'd':
            // d) + suma entero + fraccion.
            cout << "suma de 5 + f1; " << endl;
            f3 = 5 + f1;
            cout << f3.getNum() << "/" << f3.getDen() << endl;
            break;
        case 'e':
            // e) ++ incrmenta 1 al numerador.
            cout << "incrementa f3 = ++f1; " << endl;
            f3 = ++f1;
            cout << f1.getNum() << "/" << f1.getDen() << endl;
            cout << f3.getNum() << "/" << f3.getDen() << endl;
            break;
        case 'f':
            // f) += suma.
            cout << "incrementa f1 += f2; " << endl;
            //f1 += f2;
            cout << f1.getNum() << "/" << f1.getDen() << endl;
            cout << f2.getNum() << "/" << f2.getDen() << endl;
            break;
            
        case 'g':
            // g) + suma fraccion + entero.
            cout << "suma de f1 + 2; " << endl;
            //f3 = f1 + 2;
            cout << f3.getNum() << "/" << f3.getDen() << endl;
            break;
            
        case 'h':
            // h) -- decrementa 1 al numerador.
            //f3 = --f1;
            cout << f1.getNum() << "/" << f1.getDen() << endl;
            cout << f3.getNum() << "/" << f3.getDen() << endl;
            break;
            
        case 'i':
            // i) - resta.
            //f3 = f1 - f2;
            cout << f3.getNum() << "/" << f3.getDen() << endl;
            break;
    }
    return 0;
}
