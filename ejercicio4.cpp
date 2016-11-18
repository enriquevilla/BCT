//
//  main.cpp
//  ejercicio4func
//
//  Created by Enrique Villa on 9/6/16.
//  Copyright © 2016 Enrique Villa. All rights reserved.
//

#include <iostream>
using namespace std;

bool pertenece(int iA, int iB, int iC, int iX, int iY)
{
    if (iC == iA * iX + iB * iY) {
        return true;
    } else {
        return false;
    }
}
int main() {
    int iA, iB, iC, iX, iY;
    bool bRes;
    cin >> iA >> iB >> iC >> iX >> iY;
    bRes = pertenece(iA, iB, iC, iX, iY);
    if (bRes == true) {
        cout << "Verdadero" << endl;
    } else {
        cout << "Falso" << endl;
    }
    return 0;
}
