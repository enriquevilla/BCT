//
//  main.cpp
//  test1
//
//  Created by Enrique Villa on 10/7/16.
//  Copyright © 2016 Enrique Villa. All rights reserved.
//

#include <iostream>
using namespace std;

void fraccion(int iN1, int iD1, int iN2, int iD2, int &iNMen, int &iDMen) {
    double frac1, frac2;
    frac1 = (double) iN1 / iD1;
    frac2 = (double) iN2 / iD2;
    if (frac2 < frac1) {
        iNMen = iN2;
        iDMen = iD2;
    } else {
        iNMen = iN1;
        iDMen = iD1;
    }
        }

int main() {
    int iN1, iD1, iN2, iD2, iN3, iD3, iNMen, iDMen;
    cin >> iN1;
    cin >> iD1;
    cin >> iN2;
    cin >> iD2;
    cin >> iN3;
    cin >> iD3;
    fraccion(iN1, iD1, iN2, iD2, iNMen, iDMen);
    fraccion(iNMen, iDMen, iN3, iD3, iNMen, iDMen);
    cout << iNMen << "/" << iDMen << endl;

    
    return 0;
}
