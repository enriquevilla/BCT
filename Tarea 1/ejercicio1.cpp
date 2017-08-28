//
//  main.cpp
//  Tarea 1
//
//  Created by Enrique Villa on 1/16/17.
//  Copyright © 2017 Enrique Villa. All rights reserved.
//
/*
 
    Programa para obtener el último dígito ISBN
 
    Algoritmo
 1. Leer el ISBN
 2. Convertirlo de un string a un arreglo de una dimensión
 3. Calcular el último dígito con la fórmula, convirtiendo los números de ASCII a decimal dentro de la fórmula
 4. Checar si el dígito es mayor a 9
 5. Imprimir en la pantalla el ISBN con el dígito obtenido
 6. Dar la opción de correr el programa nuevamente
 
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
    string sISBN;
    char cSeguir;
    int iISBN[9], iDigito = 0;
    do {
        cout << "Teclea el número de 9 dígitos:" << endl;
        cin >> sISBN;
        for (int iCont = 0; iCont < 9; iCont++) {
            iISBN[iCont] = sISBN[iCont]; //convertir el string en un arreglo de una dimensión para facilitar
            iDigito = iDigito + (iISBN[iCont] - 48) * (iCont + 1); //aplicar la fórmula haciendo las conversiones adecuadas al contenido del arreglo y el contador
        }
        iDigito = iDigito % 11;
        if (iDigito > 9) {
            cout << "El ISBN es " << sISBN << "-" << "X" << endl;
        } else {
            cout << "El ISBN es " << sISBN << "-" << iDigito << endl;
        }
        iDigito = 0;
        cout << "¿Otro?" << endl;
        do {
            cin >> cSeguir;
            cSeguir = toupper(cSeguir);
        } while (cSeguir != 'S' && cSeguir != 'N');
    } while (cSeguir == 'S');
    return 0;
}
