//
//  main.cpp
//  codetest1
//
//  Created by Enrique Villa on 10/11/16.
//  Copyright © 2016 Enrique Villa. All rights reserved.
//

#include <iostream>
using namespace std;

void leeDatos(int iArrA[], int iArrB[], int iSizeA)
{
    for(int iContA = 0, iContB = iSizeA - 1; iContA < iSizeA; iContA++, iContB--)
    {
        cout << "Ingrese el dato " << iContA << ": ";
        cin >> iArrA[iContA];
        iArrB[iContB] = iArrA[iContA];
    }
}
void muestraDatos(int iArrB[], int iSize)
{
    for(int iCont = 0; iCont < iSize; iCont++)
        cout << iArrB[iCont] << endl;
}

int main()
{
    int iSizeA, iArrA[20], iArrB[20];
    
    cout << "Cuantos elementos quieres?" << endl;
    cin >> iSizeA;
    
    leeDatos(iArrA, iArrB, iSizeA);
    
    cout << "Los datos del arreglo son " << endl;
    muestraDatos(iArrB, iSizeA);
    
    return 0;
}